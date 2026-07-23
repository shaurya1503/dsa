#include<iostream>
#include<vector>
using namespace std;
vector<int> majorityelement(const vector<int> arr){
    int n=arr.size();
    vector<int> temp;
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                cnt++;
                if(cnt>n/3){
                    if(find(temp.begin(),temp.end(),arr[i])==temp.end()){
                    temp.push_back(arr[i]);}
                }
            }
        }
    }
    return temp;
}
int main(){
    vector<int> arr = {1,2,1,1,3,2,2};
    vector<int> solution=majorityelement(arr);
    for(int x : solution){
        cout<<x<<" ";
    }
}
//Time complexity: O(N^2), O(n) for outer loop and o(n) for inner loop.
//Space complexity: O(1) as only constants are used.