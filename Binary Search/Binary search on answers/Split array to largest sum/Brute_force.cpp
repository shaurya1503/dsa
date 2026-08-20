#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int CountPartition(vector<int>& arr,int maxSum,int k){
    int n=arr.size();
    int Partition=1;
    int sum=0;
    for(int i=0;i<n;i++){
        if(sum+arr[i]<=maxSum){
            sum+=arr[i];
        }
        else {
            Partition++;
            sum=arr[i];
        }
    }
return Partition;
}
int leastSum(vector<int>& arr, int k){
    int n=arr.size();
    for(int i=*max_element(arr.begin(),arr.end());i<accumulate(arr.begin(),arr.end(),0);i++){
        if(CountPartition(arr,i,k)<=k) return i;
    }
    return -1;
}
int main(){
    vector<int> arr={1,2,3,4,5};
    int k=3;
    cout<<leastSum(arr,k);
}
//Time Complexity: O(N * (sum(arr[])-max(arr[])+1)), where N = size of the array, sum(arr[]) = sum of all array elements, max(arr[]) = maximum of all array elements.

//Space Complexity: O(1), no extra space used.