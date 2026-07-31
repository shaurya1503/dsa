#include<iostream>
#include<vector>
using namespace std;
bool isThere(vector<int>& arr,int target){
    int low=0,high=arr.size()-1;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            return true;
        }
        else if(arr[low]<=arr[mid]){
            if(arr[low]<=target&&target<arr[mid]) high=mid-1;
            else low=mid+1;
        }
        else{
            if(arr[mid]<target&&arr[high]>=target) low=mid+1;
            else high=mid-1;
        }
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
//Time Complexity: O(logN) for the best and average case. O(N/2) for the worst case. Here, N = size of the given array.

//Space Complexity: O(1), no extra space used