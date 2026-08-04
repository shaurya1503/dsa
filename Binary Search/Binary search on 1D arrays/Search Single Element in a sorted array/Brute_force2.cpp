//Using xor concept
#include<iostream>
#include<vector>
using namespace std;
int searchSingle(vector<int>&arr){
    int n=arr.size()-1;
    int ans=0;
    for(int i=0;i<=n;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    vector<int> arr={1,1,2,2,3,3,4,5,5,6,6};
    cout<<searchSingle(arr);
    return 0;
}
//Time Complexity: O(N), N = size of the given array.We are traversing the entire array.

//Space Complexity: O(1) as we are not using any extra space.