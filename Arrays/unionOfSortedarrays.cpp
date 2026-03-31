//Code for making union of two sorted arrays
#include<bits/stdc++.h>
using namespace std;
//Function which will give a vector of union of the arrays
vector<int> Union(int arr1[], int arr2[], int n, int m){
    vector<int> result;
    int i=0, j=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
        
        if(result.empty() || result.back() != arr1[i]){
            result.push_back(arr1[i]);
        }
        i++;
    }else if(arr2[j]<arr1[i]){
        if(result.empty()|| result.back()!=arr2[j]){
            result.push_back(arr2[j]);
        }
        j++;
    }
    else{
        if(result.empty()||result.back()!=arr1[i]){
            result.push_back(arr1[i]);
        }
        i++,j++;
    }
}
    while(j<m){
        if(result.empty()||result.back() != arr2[j]){
            result.push_back(arr2[j]);
        }
        j++;
    }
    while(i<n){
        if(result.empty()||result.back() != arr1[i]){
            result.push_back(arr1[i]);
        }
        i++;
    }
    return result;

}
int main(){
    int arr1[9]={1,2,2,3,4,5,5,6,7};
    int arr2[11]= {2,4,5,5,5,454,456,554,554,556,634};
    int n= 9;
    int m=11;
    vector<int> result1= Union(arr1,arr2,n,m);
    for(int x: result1)
    cout<<x<<" ";
    return 0;
}