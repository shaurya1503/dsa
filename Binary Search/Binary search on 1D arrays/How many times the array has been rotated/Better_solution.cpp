#include<iostream>
#include<vector>
using namespace std;
int numberRotation(vector<int>&arr){
    int index=0;
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]>arr[i+1])return i+1;
    }
    return 0;
}
int main(){
    vector<int> arr={4,5,6,7,0,1,2,3};
    cout<<"The number of times the array is rotated is "<<numberRotation(arr);
return 0;
}
//Time Complexity: O(n),We traverse the array once to find the rotation point, where n is the size of the array.
//Space Complexity: O(1),Only a few extra variables are used regardless of input size, so constant space.