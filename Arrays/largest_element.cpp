#include<bits/stdc++.h>
using namespace std;
int largest(int arr[],int n){
      int max=arr[0];
    for(int j=0;j<n;j++){
        if(arr[j]>=max){
            max=arr[j];
        }
    }
    return max;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<< largest(arr,n);
} 