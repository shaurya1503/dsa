#include<iostream>
#include<vector>
using namespace std;
void spiralOutput(vector<vector<int>> matrix){
    int n=matrix.size();
    int m=matrix[0].size();
    int left=0;
    int top=0;
    int bottom=n-1;
    int right=m-1;
    while(top<=bottom && right>=left){
    for(int j=left;j<=right;j++){
        cout<<matrix[top][j]<<" ";
        
    }
    top++;
    for(int i=top;i<=bottom;i++){
        cout<<matrix[i][right]<<" ";
       
    }
    right--;
    if(top<=bottom){
        for(int j=right;j>=left;j--){
            cout<<matrix[bottom][j]<<" ";
        }
    
        bottom--;}
    if(right>=left){
        for(int i=bottom;i>=top;i--){
            cout<<matrix[i][left]<<" ";
        }
       left++;
    }
}
}
int main(){
    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    spiralOutput(matrix);
    return 0;
}