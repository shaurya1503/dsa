#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int nthRoot(int n,int m){
    for(int i=0;i<=m;i++){
        if(m==pow(i,n)){
            return i;
        }
    }
    return -1;
}
int main(){
    int n=3,m=27;
    cout<<nthRoot(n, m);
    return 0;
}
//Time Complexity: O(M), we search for every possible number from 1 to M to check if it is the Nth root.
//Space Complexity: O(1), constant additional space is used.