#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
#include<unordered_set>
using namespace std;
int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        if(nums.empty()) return 0;
        int longest=1;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        for(auto it : st){
            if(st.find(it-1)==st.end()){
                int cnt=1;
                int x=it;
                while(st.find(x+1)!=st.end()){
                    x++;
                    cnt++;
                }
                longest=max(longest,cnt);
            }
        }
        return longest;
    }
int main(){
    vector<int> arr={1,1,2,4,5,100,101,102,3};
    cout<<"The most number of consecutive number are "<<longestConsecutive(arr);
}
//Time Complexity: O(n), where n is the number of elements in the array. This is because we traverse each element once to build the set and then again to find the longest consecutive sequence.

//Space Complexity: O(n), as we use a set to store the unique elements of the array, which in the worst case can be equal to the size of the input array.