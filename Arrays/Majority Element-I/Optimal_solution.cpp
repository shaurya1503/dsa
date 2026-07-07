//Also known as Moore's voting algorithm in which we are using the fact that the majority element is present n/2 times
#include<iostream>
#include< vector>
using namespace std;
int majority (vector<int>& nums){
    int n=nums.size();
    int cnt=0;
    int el;
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            el=nums[i];
        }
        if(nums[i]==el){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    //Checking whether the element is majority or not
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(nums[i]==el) cnt1++;
    }
    if(cnt1>n/2){
        return el;
    }
    return -1;
}

int main(){
    vector<int> nums={0,0,1,7,7,7,2,7,7};
    cout<<majority(nums)<<endl;
return 0;
}
//Time Complexity: O(N), where N is the size of the input array. This is because we are iterating through the array once to find the potential majority element and then again to verify it.

//Space Complexity: O(1), as we are using only a constant amount of extra space.