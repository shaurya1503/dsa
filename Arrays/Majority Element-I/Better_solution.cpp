//We create an unordered map in which we are storing element and there occurence number as key
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int majority (vector<int>& nums){
    int n=nums.size();
    unordered_map<int,int> mpp;
    for(int num: nums){
        mpp[num]++;     //For each element number of time occuring is used as key
    }
    for(auto& pair: mpp){
        if(pair.second>n/2)
        return pair.first; //Return the value if element is found
    }
    return -1; //Return -1 if no element is found
}
int main(){
    vector<int> nums={0,0,1,7,7,7,2,7,7};
    cout<<majority(nums)<<endl;
return 0;
}
