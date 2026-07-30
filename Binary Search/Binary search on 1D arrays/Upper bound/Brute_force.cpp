//As for brute force approach we could simply apply linear search and return the index as soon as arr[index]>target.
#include<iostream>
#include<vector>
using namespace std;
int upperBound(vector<int> arr, int target){
    for(int i=0;i<arr.size();i++){
        if(arr[i]>target){
            return i;
        }
    }
    return arr.size(); //If no element is found
}
int main(){
    vector<int> arr={1,2,2,3};
    int target=2;
    cout<<upperBound(arr,target);
}
//Time complexity:O(n), where n is the size of an array
//Space complexity: O(1), as there is no extra spaces are used.