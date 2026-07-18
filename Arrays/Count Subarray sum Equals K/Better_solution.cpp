#include<iostream>
#include<vector>
using namespace std;
int countSubarray(vector<int> Array,int target){
    int count=0;
    for(int i=0;i<Array.size();i++){
        int sum=0;
        for(int j=i;j<Array.size();j++){
            sum+=Array[j];
            if(sum==target){
                count++;
            }
        }
    }
   return count;    
 }

int main(){
    vector<int> Array={3,1,2,4};
    cout<<countSubarray(Array,3);
    return 0;
}
//Time Complexity: O(n²),We use two nested loops to check all subarrays, where n is the size of the array.

//Space Complexity: O(1),Only a few extra variables are used, so constant extra space regardless of input size.
