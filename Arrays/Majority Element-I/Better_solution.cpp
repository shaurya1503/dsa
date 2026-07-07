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
//Time Complexity: O(N), where N is the size of the input array. This is because we are iterating through the array once to count occurrences and then iterating through the hashmap to find the majority element.

//Space Complexity: O(N), as we are using a hashmap to store the counts of each element, which can take up to N space in the worst case.