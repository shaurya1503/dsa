#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int counterPartition(vector<int> arr, int box){
    int partition=1;
    int sum=0;
    for(int i=0;i<arr.size();i++){
        if(sum+arr[i]<=box){
            sum+=arr[i];
        }
        else {sum=arr[i];
        partition++;
    }

    }
    return partition;
}
int minDistance(vector<int> arr, int k){
    for(int i=*max_element(arr.begin(),arr.end());i<accumulate(arr.begin(),arr.end(),0);i++){
        if(counterPartition(arr,i)<=k) return i;
    }
    return -1;
}
int  main(){
    vector<int> arr={10, 20, 30, 40};
    int k=2;
    cout<<minDistance(arr,k);
}
//Time Complexity: O(N * (sum(arr[])-max(arr[])+1)), where N = size of the array, sum(arr[]) = sum of all array elements, max(arr[]) = maximum of all array elements.
//Space Complexity: O(1), no extra space used.