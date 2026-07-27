#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
vector<vector<int>> threesome(vector<int>arr){
    set<vector<int>> st;
    int n=arr.size();
    for(int i=0;i<n;i++){
        set<int> hashset;
        for(int j=i+1;j<n;j++){
            int third=-(arr[i]+arr[j]);
            if(hashset.find(third) != hashset.end()){
                vector<int> temp={arr[i],arr[j],third};
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }
            hashset.insert(arr[j]);
        }
 
    }
    vector<vector<int>> solution(st.begin(),st.end());
    return solution;
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
//Time Complexity: O(N^2 * log(no. of unique triplets)),
//as we are mainly using 3 nested loops. And inserting triplets into the set takes O(log(no. of unique triplets)) time complexity. But we are not considering the time complexity of sorting as we are just sorting 3 elements every time.

//Space Complexity: O(2 * no. of the unique triplets) + O(N) as we are using a set data structure and a list to store the triplets and extra O(N) for storing the array elements in another set.