//We simply iterate through array and for each element we iterate again to check that how many times element is found.
#include<iostream>
#include<vector>
using namespace std;
int majority(vector<int>& nums){
    int n=nums.size();
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(nums[i]==nums[j]){
                cnt++; 
            }
        }
        if(cnt>n/2){
            return nums[i]; //Return the value if the element is found
        }
    }
    return -1; //If no element is found which have count greater than or equal to half of size of the array
}
int main(){
    vector<int> nums={0,0,1,7,7,7,2,7,7};
    cout<<majority(nums)<<endl;
return 0;
}
//Time complexity : O(N^2) - For iterating the array  to times
//Space complexity : O(1) - As no extra space is required