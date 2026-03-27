#include<bits/stdc++.h>
using namespace std;
int second_largest(int arr[], int n){
    int max = arr[0];
    int secondlargest=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<=arr[i] ){
        max=arr[i];
        }
    }
    for ( int i = 0; i < n; i++){
        if(arr[i]>secondlargest && arr[i]!=max) secondlargest=arr[i];
    }
   
    
    return secondlargest;
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cout<<"Enter Element "<<i<<endl;
        cin>>arr[i];
    }
    cout<<"Second largest digit in the array is : "<< second_largest(arr,n);
}