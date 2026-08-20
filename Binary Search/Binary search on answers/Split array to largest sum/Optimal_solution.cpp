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
    int low=*max_element(arr.begin(),arr.end());
    int high=accumulate(arr.begin(),arr.end(),0);
    int ans=-1;
    while(high>=low){
        int mid=low+(high-low)/2;
        if(CountPartition(arr,mid,k)<=k) {
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}
int main(){
    vector<int> arr={1,2,3,4,5};
    int k=3;
    cout<<leastSum(arr,k);
}
//Time Complexity: O(N * log(sum(arr[])-max(arr[])+1)), where N = size of the array, sum(arr[]) = sum of all array elements, max(arr[]) = maximum of all array elements.

//Space Complexity: O(1), no extra space used