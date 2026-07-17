#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> returnzeroes(vector<vector<int>>& matrix){
    int n=matrix.size();
    int m=matrix[0].size();
    bool firstRowzero=false;
    bool firstColumnzero=false;
    //Check if first row has any zeroes
    for(int j=0;j<m;j++){
        if (matrix[0][j]==0) {
            firstRowzero=true;
            break;    
        }
        
    }
    //Check if the first column have any zeroes
    for(int i=0;i<n;i++){
        if(matrix[i][0]==0){
            firstColumnzero=true;
            break;
        }
    }
    // Mark the zeroes in first column/rows
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                matrix[0][j]=0;
                matrix[i][0]=0;
            }
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(matrix[i][0]==0||matrix[0][j]==0){
                matrix[i][j]=0;
            }
        }
    }
    //now for first column
    if(firstColumnzero){
        for(int i=0;i<n;i++){
            matrix[i][0]=0;
        }
    }
    //for first row
    if(firstRowzero){
        for(int j=0;j<m;j++){
            matrix[0][j]=0;
        }
    }
    return matrix;
}
int main(){
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    vector<vector<int>>solution =returnzeroes(matrix);
    for(auto row: solution){
        for(auto value: row){
            cout<<value<<" ";
        }
        cout<<"\n";
    }
}
//Time Complexity: O(m × n),We iterate over the entire matrix a constant number of times (first pass for markers, second pass for zeroing, final pass for first row/col), where m = number of rows and n = number of columns.
//Space Complexity: O(1),No extra space is used apart from a few boolean flags; all marker information is stored within the first row and column of the matrix itself.
