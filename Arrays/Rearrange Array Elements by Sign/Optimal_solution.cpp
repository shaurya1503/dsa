#include<iostream>
#include<vector>
using namespace std;
vector<int> RearrangeBySign(vector<int>&arr){
    int n=arr.size();
    vector<int> ans(n,0);
   int positiveIndex=0;
   int negativeIndex=1;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            ans[positiveIndex]=arr[i];
            positiveIndex+=2;
        }
        if(arr[i]<0){
          ans[negativeIndex]=arr[i];
          negativeIndex+=2;
        }
    }
   
    return ans;

}

int main (){
    vector<int> arr={1,2,-4,-5};
vector<int> sol = RearrangeBySign(arr);
for(int x:sol){
    cout<<x<<" ";
}
return 0;
}
//Time Complexity: O(N) { O(N) for traversing the array once and substituting positives and negatives simultaneously using pointers, where N = size of the array A}.

//Space Complexity: O(N) { Extra Space used to store the rearranged elements separately in an array, where N = size of array A}.