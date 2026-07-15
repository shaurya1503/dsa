#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool ls(vector<int>& arr,int num){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==num){
            return true;
        }
    }
    return false;
}
int consecutiveArray(vector<int> &arr){
    int longest=1;
    for(int i=0;i<arr.size();i++){
        int x=arr[i];
        int cnt=1;
        while(ls(arr,x+1)==true){
            x=x+1;
            cnt++;
        }
        longest=max(longest,cnt);
    }
    return longest;
}
int main(){
    vector<int> nums={100,2,3,200,4,1};
    cout<<"The most number of consecutive number are "<< consecutiveArray(nums);
}
//Time Complexity: O(n^2), where n is the number of elements in the array. This is because for each element, we may need to perform a linear search through the entire array to find consecutive numbers.

//Space Complexity: O(1), as we are using a constant amount of extra space for variables.