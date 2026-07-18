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