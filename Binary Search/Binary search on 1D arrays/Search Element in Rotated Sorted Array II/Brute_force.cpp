#include<iostream>
#include<vector>
using namespace std;
bool isThere(vector<int>& arr, int target){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==target) return true;
    }
    return false;
}
int main(){
    vector<int> arr={7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
    int target=3;
    bool found=isThere(arr,target);
    if(found) cout<<"True";
    else cout<<"False";
}
//Time complexity : O(N), because we are iterating through whole array
//space complexity : O(1), because no extra space is being used.