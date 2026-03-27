#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(int arr[], int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
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
    
     cout<<"The number of unique element is : "<<removeDuplicates(arr,n)<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}