#include<iostream>
#include<vector>
using namespace std;
int floorsqrt(int n){
   int low=0, high=n;
   int ans=-1;
   while(low<=high){
    int mid=(low+high)/2;
    if(mid==n/mid) return mid;
    else if(mid>n/mid) {
        high=mid-1;
    }
    else if(mid<n/mid)
    {ans=mid;
    low=mid+1;
   }
   
}
return ans;
}
int main(){
    int n=35;
    cout<<floorsqrt(n)<<endl;
}
//Time Complexity: O(log(N)), we apply binary search on our search space to reduce it into half at every step.
//Space Complexity: O(1), since the algorithm does not use any additional space or data structures.