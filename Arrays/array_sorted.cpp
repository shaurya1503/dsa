#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int n){
    int min=arr[0];
    int count = 0;
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]) count++ ;
        
    }
    if(count!=0) return false;
    else return true;
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<< "Enter the element "<< i+1<<" = ";
        cin>>arr[i];
    }
    cout<<isSorted(arr,n);

}