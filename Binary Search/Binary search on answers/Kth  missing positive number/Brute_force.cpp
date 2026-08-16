#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int missingElement(vector<int>& arr, int k){
    int n=arr.size();
    int m=0;
    int cnt=0;
    for(int i=1; ;i++){
        if(arr[m]!=i){
            cnt++;
            if(cnt==k) return i;
        }else if(arr[m]==i) m++;
    }
    return -1;
}
int main(){
    vector<int> arr={4,7,9,10};
    int k=6;
    cout<<missingElement(arr,k);
}
//Time Complexity: O(N), where N = size of the given array.
//Space Complexity: O(1), no extra space used.