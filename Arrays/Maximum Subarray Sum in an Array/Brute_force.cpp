#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int maxSubArray(vector<int>& arr){
    int n=arr.size();
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            maxi=max(maxi,sum);
        }
    }
    return maxi;
}
int main(){
    vector<int> arr={2, 3, 5, -2, 7, -4};
    cout<<"The maximum subarray sum is"<<maxSubArray(arr);
    return 0;
}
//Time Complexity: O(N^2), where N is the size of the array. This is because we have two nested loops: one for the starting index and one for the ending index of the subarray.

//Space Complexity: O(1), as we are using a constant amount of space for variables, regardless of the input size.
