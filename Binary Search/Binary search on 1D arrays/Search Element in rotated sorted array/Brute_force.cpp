//We can simply iterate whole array and when the target is found we returns the index
#include<iostream>
#include<vector>
using namespace std;
int search (vector<int>& arr,int target){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==target) return i;
    }
    return -1;
}
int main(){
    vector<int> arr={4,5,6,7,0,1,2};
    int target = 0;
    cout<<search(arr,target);
}
//Time complexity : O(N)
//Space complexity: O(1)