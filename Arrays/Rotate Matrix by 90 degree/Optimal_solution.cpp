#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> rotateMatrix(vector<vector<int>>& matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    //Finding transpose of the matrix
    for(int i=0;i<n;i++){
        for(int j=i+1;j<m;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    //Reversing every row 
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
    return matrix;
}
int main(){
    vector<vector<int>> matrix={{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    rotateMatrix(matrix);
    for(auto row: matrix){
        for(auto value: row){
            cout<<value<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
//Time Complexity: O(N²),We traverse every element once during transposition and again during reversal of each row, resulting in a total of O(N²) time.

//Space Complexity: O(1),All operations are done in-place using only temporary variables. No extra matrix is used.

