#include<iostream>
#include<maps>
#include<algorithm>
using namespace std;
int longestsubarray(int* arr,int k,int n){
    int sum=0;
    int maxlen=0;
    map<int,int> presum; //WE could also use unordered map but in worst case scenario i.e. too much collision its time complexity becomes O(N^2)
    
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==k){
            maxlen=max(maxlen,i+1);
        }
        int rem=sum-k;
        if(presum.find(rem)!=presum.end()){
            int len=i-presum[rem];
            maxlen=max(maxlen,len);
        }
        if(presum.find(sum)==presum.end()){
            presum[sum]=i;
        }
    }
    return maxlen;
}
int main(){
    int arr[]={10, 5, 2, 7, 1, 9};
    int k=15;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<longestsubarray(arr,k,n)<<endl;
    return 0;
}
//Time complexity for ordered map : O(n*logn) 
//For unordered map - best case: O(n)
//                    Worst case : O(n^2)
//Space commplexity : O(n)
