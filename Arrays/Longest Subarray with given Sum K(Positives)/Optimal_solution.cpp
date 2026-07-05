#include<iostream>
#include<algorithm>
using namespace std;
int longestsubarray(int* arr,int k,int n){
    int left=0,right=0,maxlen=0,sum=arr[0];
    while(right<n){
        while(sum>k&&left<=right){
            sum-=arr[left];
            left++;
        }
        if(sum==k){
            maxlen=max(maxlen,right-left+1);
        }
        right++;
        if(right<n){
            sum+=arr[right];
        }
        
    }
    return maxlen;
}
int main(){
    int arr[]={10, 5, 2, 7, 1, 9};
    int k=15;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<longestsubarray(arr,k,n)<<endl;
    
}
//Time complexity : O(2n)
//Space complexity : O(1)
