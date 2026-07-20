#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int countSubarray(vector<int> Array,int target){
    int cnt=0;
    int presum=0;
    unordered_map <int,int> mpp;
    mpp[0]=1;
    for(int i=0;i<Array.size();i++){
        presum+=Array[i];
        int remove=presum-target;
        cnt+=mpp[remove];
        mpp[presum]+=1;
    }
   return cnt;    
 }

int main(){
    vector<int> Array={3,1,2,4};
    cout<<countSubarray(Array,3);
    return 0;
}
//Time Complexity: O(n) We traverse the array once, where n is the size of the array. Each prefix sum operation and hashmap lookup is O(1) on average.
//Space Complexity: O(n) In the worst case, all prefix sums are distinct and stored in the hashmap, so space grows linearly with input size.
