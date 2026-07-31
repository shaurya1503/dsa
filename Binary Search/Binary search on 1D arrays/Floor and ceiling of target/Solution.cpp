#include<iostream>
#include<vector>
using namespace std;
int floor(vector<int>& nums,int target){
    int low=0,high=nums.size()-1;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]<=target){
            ans=mid;
            low=mid+1;
        }
        else high=mid-1;
    }
    if(ans==-1) return -1;
    return nums[ans];
}
int ceiling(vector<int>& nums,int target){
    int low=0,high=nums.size()-1;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]>=target){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    if(ans==-1) return -1;
    return nums[ans];
}
int main(){
    vector<int> nums={3,4,4,7,8,10};
    int target=5;
    cout<<"The floor of target is "<< floor(nums,target)<<endl;
    cout<<"The ceiling of target is "<<ceiling(nums,target);
}
//Time Complexity:O(logN), where N = size of the given array. We are using the Binary Search algorithm

//Space Complexity: O(1). No extra space used
