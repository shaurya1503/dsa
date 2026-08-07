#include<vector>
#include<iostream>
using namespace std;
int peakelement(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        if((i==0||arr[i]>arr[i-1]) && 
        (i==n-1||arr[i+1]<arr[i])) return i ;
    }
    return -1;
}
int main(){
    vector<int> arr={1,2,1,4,5,6,7,8,5,1};
    cout<<"The peak element is at index "<<peakelement(arr);
    
}
//Time complexity: O(n) because we are checking whole loop one time
//Space complexity:O(1) because we are not using any element which increases with input.