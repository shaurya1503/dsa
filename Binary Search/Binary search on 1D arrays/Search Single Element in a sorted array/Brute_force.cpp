#include<iostream>
#include<vector>
using namespace std;
int searchSingle(vector<int> &arr){
    if(arr.size()==1) return arr[0];
    for(int i=0;i<arr.size();i=i+2){
        if(i==arr.size()-1&&arr[i]!=arr[i-1])return arr[i];
        else if(i!=arr.size()-1&&arr[i]!=arr[i+1]) return arr[i];
       
    }

    return -1;
}
int main(){
    vector<int> arr={1,1,2,2,3,3,4,4,5,5,6,6,7};
    cout<<searchSingle(arr);
}
//Time complexity: O(N) as we are going through the array single time
//Space complexity: O(1) as we are not using any extra space.