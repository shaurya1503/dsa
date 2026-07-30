#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>arr,int target){
    int low=0,high=arr.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if (arr[mid]>target)
        {
            high=mid-1;
        }
        else low=mid+1;
        
    }
 return -1;
}
int main(){
    vector<int> arr={2,3,4,5,6,7};
    int target=5;
    cout<<binarySearch(arr,target);
}
//Time complexity: we are dividing the array 2 time at every step. hence the time complexity is O(log{base 2}n)
//Space complexity: we are not using any other data types hence the space complexity is O(1).