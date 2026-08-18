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
    int maxVal=*max_element(arr.begin(),arr.end());
    int minVal=*min_element(arr.begin(),arr.end());
    int n=maxVal-minVal;
    sort(arr.begin(),arr.end());
    for(int i=0;i<=n;i++){
        if(canplace(arr,cows,i)==true){
            continue;
        }
        else return i-1;

    }
return -1;
}
int main(){
    vector<int> arr={0,3,4,7,10,9};
    int k=4;
    cout<<aggressiveCow(arr,k);
}
//Time Complexity: O(NlogN) + O(N *(max(stalls[])-min(stalls[]))), where N = size of the array, max(stalls[]) = maximum element in stalls[] array, min(stalls[]) = minimum element in stalls[] array.

//Space Complexity: O(1) as we are not using any extra space to solve this problem.