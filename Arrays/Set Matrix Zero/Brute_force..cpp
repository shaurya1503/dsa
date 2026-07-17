#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> returnzeroes(vector<vector<int>>& matrix){
    int n=matrix.size();
    int m=matrix[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                //mark the rows -1 except the zero element
                for(int col=0;col<m;col++){
                    if(matrix[i][col]!=0){
                        matrix[i][col]=-1;
                    }
                }
                //mark the whole column -1 except the zero element
                for(int row=0;row<n;row++){
                    if(matrix[row][j]!=0){
                        matrix[row][j]=-1;
                        }
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==-1){
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
//Time Complexity: O(m * n * (m + n)), We iterate through every cell (m * n), and for each zero, we potentially mark its entire row (O(n)) and column (O(m)), leading to O(m * n * (m + n)) overall.
//Space Complexity: O(1), We are not using any extra data structures, only modifying the matrix in place (apart from a few variables).


