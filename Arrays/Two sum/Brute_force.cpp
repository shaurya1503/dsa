#include<iostream>
#include<vector>
using namespace std;
vector<int> twosum(vector<int>& a, int sum){
    int cnt=0;
    for(int i=0;i<a.size();i++){
        for(int j=i+1;j<a.size();j++){
            if(a[i]+a[j]==sum){
               return {i,j};
               cnt++;
               
            }
           
        }
        if(cnt==1){break;}
    }
    if(cnt==0) return {-1,-1};
}
int main(){
    vector<int> a= {2,6,5,8,11};
    int sum=14;
    vector<int> result = twosum(a, sum);
    if(result[0] == -1) {
        cout << "No two elements found that sum to " << sum << endl;
    } else {
        cout << "Two elements found at indices: " << result[0] << " and " << result[1] << endl;
    }
    return 0;
}
// Time complexity : O(n^2) where n is the number of elements in the array. This is because we have a nested loop that iterates through the array to find pairs of elements that sum to the target value.
// Space complexity : O(1) as we are not using any extra space that scales with the input size. We are only using a fixed amount of space for variables and the result vector.