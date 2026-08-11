#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
bool possible(vector<int>& arr,int day,int k,int m){
    int n=arr.size();
    int cnt=0,bouquet=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=day){
            cnt++;
            if(cnt==k){
                bouquet++;
                cnt=0;
            }
            
        }
        else cnt=0;
    }
    return bouquet>=m;
}
int minimumDays(vector<int>&arr,int k,int m){
    if((long long)m*k>arr.size()) return -1;
    int maxVal=*max_element(arr.begin(),arr.end());
    int miniValue=*min_element(arr.begin(),arr.end());
    int result=-1;
    int low=miniValue,high=maxVal;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(possible(arr,mid,k,m)) {
            result=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return result;
}
int main(){
    vector<int> arr={7, 7, 7, 7, 13, 11, 12, 7};
    int k=3;
    int m=2;
    cout<<minimumDays(arr,k,m);
}
//Time Complexity:O(log(max(arr[])-min(arr[])+1) * N), where {max(arr[]) -> maximum element of the array, min(arr[]) -> minimum element of the array, N = size of the array}.

//Space Complexity : O(1) as we are not using any extra space to solve this problem.