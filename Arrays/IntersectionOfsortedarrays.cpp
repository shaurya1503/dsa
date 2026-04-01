#include<bits/stdc++.h>
using namespace std;
//Brute force approach where we make a third arrays to search if the element is repeated or not
vector<int> Intersection(int arr1[],int arr2[], int n,int m){
    vector<int> result;
    int vis[m]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i] == arr2[j] && vis[j]==0){
                result.push_back(arr1[i]);
                vis[j]=1;
                break;
            }
            if(arr1[j]>arr2[i]) break;
        }
    }
    return result;
}
int main(){
    int arr1[9] = {1,2,2,3,4,5,5,456,7};
    int arr2[11] = {2,3,4,5,5,454,456,554,554,556,634};
    int n= 9;
    int m=11;
    vector<int> result1=Intersection(arr1,arr2,n,m);
    for(int x : result1){
        cout<<x<<" ";
    }
    return 0;
}