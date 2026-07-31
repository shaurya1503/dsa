#include<iostream>
#include<vector>
using namespace std;
int firstOccurence(vector<int>& arr,int target){
    int low=0,high=arr.size()-1,ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            ans=mid;
            high=mid-1;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }else high=mid-1;
    }
    return ans;
}
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
    vector<int> arr={2, 2 , 3 , 3 , 3 , 3 ,4};
    int target=3;
    int first = firstOccurence(arr,target);
    int last = lastOccurence(arr,target);
    if(first==-1||last==-1) cout<<"0";
    else cout<<last-first+1;
}
//Time complexity :O(log n) 
// Time complexity :firstOccurence=O(log n)
// Time complexity :lastOccurence=O(log n)
// Space complexity: O(1) as we are not using any extra space which is dependent on the size of the array