#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> nextPermutation(vector<int>& nums){
    int n=nums.size();
    int ind=-1;
    //Find first element which can be swapped
    for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            ind=i;
            break;
        }
    }
//If the current array is already sorted in decreasing order
    if(ind == -1){
        reverse(nums.begin(),nums.end());
        return nums;
    }
    //Swap the first element which is greater than our index element
    for(int i=n-1;i>ind;i--){
        if(nums[ind]<nums[i]){
            swap(nums[ind],nums[i]);
            break;
        }
    }
    //reverse the array aftew the swapped element
    reverse(nums.begin()+ind+1,nums.end());
    return nums;

}
int main(){
    vector<int> arr={2,1,5,4,3,0,0};
    vector<int> solution = nextPermutation(arr);
    cout<<"The next permutation is : ";
    for(auto x: solution){
        cout<<x<<" ";
    }
    return 0;
}
//Time Complexity: O(N), we find the breaking point and reverse the subarray in linear time.
//Space Complexity: O(1), constant additional space is used.
