#include<iostream>
using namespace std;
int main(){
    int arr[]= {10, 5, 2, 7, 1, 9};
    int len=0;
    int n=sizeof(arr)/sizeof(arr[0];
    for(int i=0;i<n;i++){
       int sum=0;                  //Initialize the sum to be zero
        for(int j=i;j<n;j++){
            sum += arr[j];
            if(sum==15){len=max(len,j-i+1);}
        }
    }
    cout<<"Longest subarray length"<<len<<endl;
  return 0;
}
//Time complexity : O(N^2)
//Space complexity : O(1)
