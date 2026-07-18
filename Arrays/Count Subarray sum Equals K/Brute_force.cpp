#include<iostream>
#include<vector>
using namespace std;
int countSubarray(vector<int> Array,int target){
    int count=0;
    for(int i=0;i<Array.size();i++){
        for(int j=i;j<Array.size();j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=Array[k];
            }
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
//Time Complexity: O(N3), where N = size of the array.We are using three nested loops here. Though all are not running for exactly N times, the time complexity will be approximately O(N3).
//Space Complexity: O(1) as we are not using any extra space.