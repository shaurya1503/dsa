#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int missingElement(vector<int>& arr, int k){
    int n =arr.size();
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        int missing=arr[mid]-(mid+1);
        if(missing>=k){
            ans=mid;
            high=mid-1;
        }else low=mid+1;
    }
    return low+k;
}
int main(){
    vector<int> arr={4,7,9,10};
    int k=6;
    cout<<missingElement(arr,k);
}
//Time Complexity: O(logn), used for typical binary search
//Space Complexity: O(1), no extra space used