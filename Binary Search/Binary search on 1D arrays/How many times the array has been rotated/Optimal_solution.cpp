#include<iostream>
#include<vector>
using namespace std;
int numberRotation(vector<int>& arr){
   int low=0,high=arr.size()-1;
   while(low<high){
    int mid=low+(high-low)/2;

    if(arr[high]<arr[mid]){
        low=mid+1;
    }
    else high=mid;
   }
   return low;
}
int main(){
    vector<int> arr={4,5,6,7,0,1,2,3};
    cout<<"The number of rotation is "<<numberRotation(arr);
    return 0;
}
//Time Complexity: O(log n),The binary search halves the search space each iteration, where n is the size of the array.

//Space Complexity: O(1),Only a few variables are used regardless of input size, so constant extra space.