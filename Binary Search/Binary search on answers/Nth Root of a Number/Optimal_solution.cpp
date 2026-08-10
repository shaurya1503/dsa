#include<iostream>
#include<vector>
#include<math.h>
using namespace std;int nthRoot(int n,int m){
    int low=1,high=m;
    while(low<=high){
        int mid=low+(high-low)/2;
        long long value=1;
        for(int i=0;i<n;i++){
            value*=mid;
            if(value>m) break;
        }
        if(value==m) return mid;
        else if(value>m) high=mid-1;
        else low=mid+1;
    }   
    return -1;
}
int main(){
    int n=3,m=27;
    cout<<nthRoot(n, m);
    return 0;
}
//Time Complexity: O(logM), we search for every possible number from 1 to M to check if it is the Nth root.
//Space Complexity: O(1), constant additional space is used.