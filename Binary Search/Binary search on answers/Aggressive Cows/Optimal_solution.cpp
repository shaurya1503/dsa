#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool canplace(vector<int> arr,int cows,int distance){
    int cntcows=1;
    int last=arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]-last>=distance){
            cntcows++;
            last=arr[i];
        }
        if(cntcows>=cows) return true;
      
    }
    return false;
}
int aggressiveCow(vector<int> arr, int cows){
    sort(arr.begin(),arr.end());
    int low=1,high=arr.back()-arr.front();
    int ans = -1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(canplace(arr,cows,mid)==true){
            ans=mid;
            low=mid+1;
    }
    else high=mid-1;

}
return ans;
}
int main(){
    vector<int> arr={0,3,4,7,10,9};
    int k=4;
    cout<<aggressiveCow(arr,k);
}
//Time Complexity: O(NlogN) + O(N * log(max(stalls[])-min(stalls[]))), where N = size of the array, max(stalls[]) = maximum element in stalls[] array, min(stalls[]) = minimum element in stalls[] array.

//Space Complexity: O(1) as we are not using any extra space to solve this problem.