#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int sumdivisior(vector<int>&  arr,int divisior){
    int sum=0;
    for(int x: arr){
        sum+= (x+divisior-1)/divisior;
    }
    return sum;
}
int minimumDivisior(vector<int>& arr,int limit){
    if(arr.size()>limit) return -1;
    int maxVal=*max_element(arr.begin(),arr.end());
    int low=1,high=maxVal;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(sumdivisior(arr,mid)<=limit) high=mid-1;
        else low=mid+1;
    }
    return low;
}
int main(){
    vector<int> arr={1,2,3,4,5};
    int limit=8;
    cout<<minimumDivisior(arr,limit);
}
//Time Complexity:O(log(max(arr[]))*N), where max(arr[]) = maximum element in the array, N = size of the array. We are applying binary search on our answers that are in the range of [1, max(arr[])]. For every possible divisor ‘mid’, we call the sumByD() function. Inside that function, we are traversing the entire array, which results in O(N).

//Space Complexity: O(1), no extra space is used.