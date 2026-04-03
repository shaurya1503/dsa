//Brute force approach in which we would run a loop for each element from 1 to n and check whether it is present or not 
#include<iostream>
#include<vector>
using namespace std;
int main(){
//Taking input
    int n;
    cin>>n;
    vector<int> arr(n-1);
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    //Checking if each element is present or not 
    for(int i=1;i<=n;i++){
        int found=0;//Re-iterating value of found to be zero for each new element
        for(int j=0;j<n-1;j++){
            if(arr[j]==i){
                found=1;
                break;
            }
        }
    if(found==0){
        cout<<i;
        break;
    }
}
