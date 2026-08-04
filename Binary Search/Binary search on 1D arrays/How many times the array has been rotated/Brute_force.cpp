#include<iostream>
#include<vector>
using namespace std;
int numberRotation(vector<int>& arr){
    int min=arr[0];
    int index=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<min){
            min=arr[i];
            index=i;
        }
    }
    return index;
}
int main(){
    vector<int> arr={4,5,6,7,0,1,2,3};
    cout<<"The number of times the array is rotated is "<<numberRotation(arr);
}
//Time Complexity: O(n),We scan the entire array once to find the smallest element, where n is the size of the array.
//Space Complexity: O(1),We only use a few extra variables to store the minimum value and its index, so the extra space used is constant.