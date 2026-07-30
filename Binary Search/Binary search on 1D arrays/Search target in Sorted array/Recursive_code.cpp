#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> arr,int low,int high,int target){
    if(low>high) return -1;
    int mid=low+(high-low)/2;
    if(arr[mid]==target) return mid;
    else if(arr[mid]> target) return binarySearch(arr,0,mid-1,target);
    else return binarySearch(arr,mid+1,arr.size()-1,target);
}
int main(){
    vector<int> arr={2,3,4,5,6,7};
    int target=5;
    cout<<binarySearch(arr,0,arr.size()-1,target);
}
//Time complexity: we are dividing the array 2 time at every step. hence the time complexity is O(log{base 2}n)
//Space complexity: we are not using any other data types hence the space complexity is O(1).