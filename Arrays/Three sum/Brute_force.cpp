#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
vector<vector<int>> threesome(vector<int>arr){
    set<vector<int>> st;
    int n= arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==0){
                    vector<int> temp={arr[i],arr[j],arr[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}
int main(){
    vector<int> arr={-1,0,1,2,-1,4};
    vector<vector<int>> solution = threesome(arr);
    for(auto x : solution){
        cout<<"{";
        for(auto y : x){
            cout<<y<<" ";
        }
        cout<<"}";
    }
}
//Time Complexity: O(N^3 * log(no. of unique triplets)), where N = size of the array.
//Reason: Here, we are mainly using 3 nested loops. And inserting triplets into the set takes O(log(no. of unique triplets)) time complexity. But we are not considering the time complexity of sorting as we are just sorting 3 elements every time.

//Space Complexity: O(2 * no. of the unique triplets) as we are using a set data structure and a list to store the triplets.