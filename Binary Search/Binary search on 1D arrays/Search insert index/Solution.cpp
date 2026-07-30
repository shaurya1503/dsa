#include<iostream>
#include<vector>
using namespace std;
int searchInsert(vector<int>& arr, int target){
    int low=0,high=arr.size()-1;
    int ans=arr.size();//when target is greater than all the element.
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>=target){
            ans=mid;
            high=mid-1;
        }
        if(arr[mid]<target){
            low=mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr={1,2,4,7};
    int target=6;
    cout<<searchInsert(arr,target);
}
//Time Complexity: O(logN), where N = size of the given array.

//Space Complexity: O(1) as we are using no extra space.