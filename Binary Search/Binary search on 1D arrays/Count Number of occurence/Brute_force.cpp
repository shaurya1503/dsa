#include<iostream>
#include<vector>
using namespace std;
int count(vector<int>& arr, int target){
    int cnt=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==target) cnt++;
    }
    return cnt;
}
int main(){
    vector<int> arr={2, 2 , 3 , 3 , 3 , 3 ,4};
    int target=3;
    cout<<count(arr,target);
}
//Time complexity: O(N), where n is the size of the array.
//Space complexity: O(1), as there is no extra space being used.