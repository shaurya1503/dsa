#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        int num = arr[i]; // Selecting the element
        int count = 0;
        for(int j=0;j<n;j++){ // Checking whether the element appears twice or not
            if(arr[j]==num){
                count+=1;
            }
        }
  if(count==1){cout<<arr[i];} // If the elements appears only once that's the number we want
  return 0;
    }
