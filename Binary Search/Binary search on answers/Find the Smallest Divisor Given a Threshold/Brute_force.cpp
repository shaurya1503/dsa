#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int minimumDivisior(vector<int>& arr,int limit){
    int maxVal=*max_element(arr.begin(),arr.end());
    for(int i=1;i<maxVal;i++){
        int result=0;
        for(int x: arr){
            result+=(x+i-1)/i;
        }
        if(result<=limit) return i;

    }
return -1;
}int main(){
    vector<int> arr={1,2,3,4,5};
    int limit=8;
    cout<<minimumDivisior(arr,limit);
}
//Time complexity: O(maxvalue*n) where n is the size of the array and maxvlue is the maximum value of a number in the array.
//Space complexity: O(1) as we are only using constants.