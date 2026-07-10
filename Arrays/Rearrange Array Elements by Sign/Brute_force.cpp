#include<iostream>
#include<vector>
using namespace std;
vector<int> RearrangeBySign(vector<int>&arr){
    int n=arr.size();
    vector<int> positiveArr;
    vector<int> negativeArr;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            positiveArr.push_back(arr[i]);
        }
        if(arr[i]<0){
            negativeArr.push_back(arr[i]);
        }
    }
    for(int i=0;i<n/2;i++){
        arr[2*i]=positiveArr[i];
        arr[2*i+1]=negativeArr[i];
    }
    return arr;

}

int main (){
    vector<int> arr={1,2,-4,-5};
vector<int> sol = RearrangeBySign(arr);
for(int x:sol){
    cout<<x<<" ";
}
return 0;
}
//Time Complexity: O(N+N/2) { O(N) for traversing the array once for segregating positives and negatives and another O(N/2) for adding those elements alternatively to the array, where N = size of the array A}.

//Space Complexity: O(N/2 + N/2) = O(N) { N/2 space required for each of the positive and negative element arrays, where N = size of the array A}.