#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int minimumDays(vector<int>& arr,int k,int m){
    if(m*k>arr.size()) return -1;
    int maxVal=*max_element(arr.begin(),arr.end());
    for(int i=0;i<=maxVal;i++){
        int cnt=0,ans=0;
        for(int j=0;j<arr.size();j++){
            if(arr[j]<=i){
                cnt++;
                if(cnt==k){
                    ans++;
                        if(ans==m) return i;
                    cnt=0;
                }
            }else if(arr[j]>i) cnt=0;
        }
    }
    return -1;
}
int main(){
    vector<int> arr={7, 7, 7, 7, 13, 11, 12, 7};
    int k=3;
    int m=2;
    cout<<minimumDays(arr,k,m);
}
//Time complexity: O(maxvalue*n) where n is the size of the array and maxvlue is the maximum value of a number in the array.
//Space complexity: O(1) as we are only using constants.