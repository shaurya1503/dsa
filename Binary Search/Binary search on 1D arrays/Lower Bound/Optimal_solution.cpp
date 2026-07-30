//we will use binary search algorithm
#include<iostream>
#include<vector>
using namespace std;
int lowerBound(vector<int> arr, int target){
    int low=0,high=arr.size()-1;
    int ans=arr.size();
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>=target){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
return ans;
}
int main(){
    vector<int> arr={1,2,2,3};
    int target=2;
    cout<<lowerBound(arr,target);
}
//Time Complexity: O(logn), used for typical binary search
//Space Complexity: O(1), no extra space used