//To get better time complexity we can iterate through array and create a temperory array and put first zeroes then ones then the twos.
#include<iostream>
#include<vector>
using namespace std;
vector<int> sortArray(vector<int>& arr){
    vector<int> temp;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            temp.push_back(0);
        }
    }
    for(int i=0;i<arr.size();i++){
        if(arr[i]==1){
            temp.push_back(1);
        }
    }
    for(int i=0;i<arr.size();i++){
        if(arr[i]==2){
            temp.push_back(2);
        }
    }
    return temp;
}

int main(){
    vector<int> arr={1,0,2,1,0};
    vector<int> solution = sortArray(arr);
    for(int x:solution){
        cout<<x<<" ";
    }
    return 0;
}
//Time complexity : O(N) - Due to all the linear passes
//Space complexity : O(N) - Due to an extra array temp was created