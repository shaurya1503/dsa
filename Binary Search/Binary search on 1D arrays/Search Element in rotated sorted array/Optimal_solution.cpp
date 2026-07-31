#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>& arr,int target){
    int low=0,high=arr.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(target==arr[mid]){
            return mid;
        }
        //left side sorted
        if(arr[low]<=arr[mid]){
            if(arr[low]<=target&&arr[mid]>=target) high=mid-1;
            else low=mid+1;
        }
        //right side sorted
        else {
            if(arr[mid]<=target&&arr[high]>=target){
                low=mid+1;
            }
            else high=mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int> arr={4,5,6,7,0,1,2};
    int target = 0;
    cout<<search(arr,target);
}
//Time Complexity: O(log N),We eliminate half of the search space in each iteration using binary search.

//Space Complexity: O(1),We use only a few variables (low, high, mid) no extra space used.