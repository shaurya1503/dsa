//Here we are using kadane's algorithm to solve this problem
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int maxSubArray(vector<int>& arr){
    int n=arr.size();
    int maxi=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>maxi){
            maxi=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    return maxi;
}
int main(){
    vector<int> arr={2, 3, 5, -2, 7, -4};
    cout<<maxSubArray(arr);
return 0;
}
//Time Complexity: O(n), where n is the number of elements in the array. We traverse the array only once.

//Space Complexity: O(1). We use a constant amount of space for variables.