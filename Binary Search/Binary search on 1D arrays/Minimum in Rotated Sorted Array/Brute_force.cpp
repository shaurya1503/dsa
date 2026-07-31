#include<iostream>
#include<vector>
using namespace std;
int minimum(vector<int>& arr){
    int low=INT_MAX;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<low) low=arr[i];
    }
    return low;
}
int main(){
    vector<int> arr={4,5,6,7,0,1,2,3};
    cout<<minimum(arr);

}
//Time complexity: O(N), as we are iterating through whole array
//Space complexity: O(1), as we are not using extra space