#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> returnzeroes(vector<vector<int>>& matrix){
    int n=matrix.size();
    int m=matrix[0].size();
    //Array to mark rows and columns
    vector<int> row(n,0);
    vector<int> column(m,0);
    //First iteration for marking rows and columns
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                row[i]=1;
                column[j]=1;
            }
        }
    }
    //second iteration for making marked rows and columns zeroes
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i]==1||column[j]==1){
                matrix[i][j]=0;
            }
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
//Time Complexity: O(m * n),We make two passes over the matrix.First pass to identify rows and columns to be zeroed (O(m × n)).Second pass to update the matrix using the markers (O(m * n)).Total time is proportional to the number of cells in the matrix, so O(m * n).
//Space Complexity: O(m + n),We store two extra arrays one for m rows and one for n columns. No other extra space is used besides these arrays.