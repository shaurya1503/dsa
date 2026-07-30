//As for brute force approach we could simply apply linear search and return the index as soon as arr[index]>=target.
#include<iostream>
#include<vector>
using namespace std;
int lowerBound(vector<int> arr,int target){
    for(int i=0;i<arr.size();i++){
        if(arr[i]>=target){
            return i;
            break;
        }
    }
    return arr.size();//if no element is found 
}
int main(){
    vector<int> arr={1,2,2,3};
    int target=2;
    cout<<lowerBound(arr,target);
}
//Time Complexity: O(N), where N = size of the given array.
//Space Complexity: O(1), no extra space used.