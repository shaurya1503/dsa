#include<iostream>
#include<vector>
using namespace std;
int minimum(vector<int>& arr){
    int low=0,high=arr.size()-1;
    while(low<high){
        int mid=low+(high-low)/2;
        if(arr[mid]>arr[high]) low=mid+1;
        else high=mid;
    }
    return arr[low];
}
int main(){
    vector<int> arr={4,5,6,7,0,1,2,3};
    cout<<minimum(arr);
}
//Time complexity:O(logN), at every step the search space is reduced to half using binary search.
//Space Complexity: O(1), constant additonal space is used.