// Left rotate an array by K value
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);
    for (int i=0;i<n;i++){
        cout<<"Enter Element "<<i<<" = ";
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the value of k : ";
    cin>>k;
    k=k%n;// for repetition of array
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.end());
    cout<<"Resulting array will be : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}