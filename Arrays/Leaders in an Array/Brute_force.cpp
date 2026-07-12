#include<iostream>
#include<vector>
using namespace std;
vector<int> leaderArray(vector<int>& arr){
    int n=arr.size();
    vector<int> solution;
    for(int i=0;i<n;i++){
        if(i==n-1){
            solution.push_back(arr[i]);
        }
        else{
            int cnt=0;
            bool leader=true;
            for(int j=i+1;j<n;j++){
                if(arr[i]<arr[j]){
                    leader=false;
                    break;
                }
            }
            if(leader){
                solution.push_back(arr[i]);
            }
        }
    }
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
//Time Complexity: O(N^2), where N is the size of the input array. This is because we have a nested loop where the outer loop runs N times and the inner loop runs up to N times in the worst case.

//Space Complexity: O(1), as we are using only a constant amount of extra space for the answer array, which does not depend on the input size.