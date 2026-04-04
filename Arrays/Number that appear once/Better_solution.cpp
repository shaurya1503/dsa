#include<iostream>
using namespace std;
int main(){
    int n; //Taking input of the array
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi = arr[0];
    for(int i=0;i<n;i++){
        maxi=max(maxi, arr[i]);//Finding the max value of the array
    }
    vector<int> hash(maxi+1,0);//Forming the hash array
    for(int i=0;i<n;i++){
        hash[arr[i]]++;

    }
    for(int i=0;i<n;i++){  //Checking for the element which only appear once
        if(hash[i]==1){
            cout<<i;
        }
    }
    return 0;
}
