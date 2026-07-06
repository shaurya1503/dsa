#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> twoSum(vector<int>& a, int sum){
    unordered_map<int,int> mp;
    int i=0;
    while(i<a.size()){
   
        int rem=sum-a[i];
        if(mp.find(rem)!=mp.end()){
            return {mp[rem],i};
        }
        mp[a[i]]=i;
        i++;
    }
    return {-1,-1};
}
int main(){
    vector<int> a= {2,6,5,8,11};
    int sum=14;
    vector<int> result = twoSum(a, sum);
    if(result[0]==-1 && result[1]==-1){
        cout<<"No such pair exists"<<endl;
    }
    else{
        cout<<"The indices of the two numbers are: "<<result[0]<<" and "<<result[1]<<endl;
    }
    return 0;
}
//Time complexity: O(n) due to single pass through the array
//Space complexity: O(n) due to the unordered_map used to store the numbers and their