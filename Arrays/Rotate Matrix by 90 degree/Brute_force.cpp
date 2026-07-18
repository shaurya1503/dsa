#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> rotateMatrix(vector<vector<int>>& matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> temp(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            temp[j][n-i-1]=matrix[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            matrix[i][j]=temp[i][j];
        }
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
//Time Complexity: O(N²),Each element of the matrix is visited exactly once and placed into a new matrix, so the time taken is proportional to the total number of elements.

//Space Complexity: O(N²),We use an additional matrix of the same size to store the rotated result, leading to O(N²) extra space.