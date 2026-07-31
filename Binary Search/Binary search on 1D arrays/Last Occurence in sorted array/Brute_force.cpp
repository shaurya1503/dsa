//We iterate the whole array from lasts till first element anda return the index at which the ttarget is found first.
#include<iostream>
#include<vector>
using namespace std;
int lastOccurence(vector<int>&arr, int target){
    for(int i=arr.size()-1;i>=0;i--){ 
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int> arr={3,4,13,13,13,20,40};
    int target=13;
    cout<<"the last occurence of target is at "<<lastOccurence(arr,target);
}
//Time Complexity: O(N), where N is the size of the array. This is because we are traversing the array once to find the last occurrence of the target element.

//Space Complexity: O(1), as we are using a constant amount of space for the result variable and the loop index. We are not using any additional data structures that grow with the input size.