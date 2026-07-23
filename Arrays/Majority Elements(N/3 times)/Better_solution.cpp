#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
vector<int> majorityelement(vector<int> arr){
    int n=arr.size();
    vector<int> temp;
    unordered_map<int,int> mpp;
    for(int x: arr){
        mpp[x]++;
    }
    for(auto it : mpp){
        if(it.second>n/3){
            temp.push_back(it.first);
        }
    }
    sort(temp.begin(),temp.end());
    return temp;
}
int main(){
    vector<int> arr = {1,2,1,1,3,2,2};
    vector<int> solution=majorityelement(arr);
    for(int x : solution){
        cout<<x<<" ";
    }
    return 0;
}
//Time complexity: O(n) for average and best case as we are using unordered maps 
//and for worst case time complexity: O(n^2)
//Space Complexity: O(N) for using a map data structure. A list that stores a maximum of 2 elements is also used, but that space used is so small that it can be considered constant.

