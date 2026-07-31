#include<iostream>
#include<vector>
using namespace std;
int lastOccurence(vector<int> & arr, int target){
    int low=0,high=arr.size()-1,ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            ans=mid;
            low=mid+1;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }else high=mid-1;
    }
    return ans;
}
int main(){
    vector<int> arr={3,4,13,13,13,20,40};
    int target=13;
    cout<<"the last occurence of target is at "<<lastOccurence(arr,target);
}
//Time Complexity: O(log{base 2} N), where N is the size of the array. This is because we are using binary search, which reduces the search space by half in each iteration.

//Space Complexity: O(1), as we are using a constant amount of space for the result variable and the loop indices. We are not using any additional data structures that grow with the input size.