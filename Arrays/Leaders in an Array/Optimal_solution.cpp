#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
vector<int> leaderArray(vector<int>& arr){
    vector<int> solution;
    int n=arr.size();
    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxi){
            maxi=arr[i];
            solution.push_back(maxi);
        }
    }
    reverse(solution.begin(),solution.end());
    return solution;
}

 
int main(){
    vector<int> arr={10,22,12,3,0,6};
    vector<int> ans=leaderArray(arr);
    for(int x: ans){
        cout<<x<<" ";
    }
    return 0;
}
//Time Complexity: O(N), where N is the size of the input array. This is because we traverse the array only once.

//Space Complexity: O(1), as we are using only a constant amount of extra space.