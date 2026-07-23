#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> majorityelement(vector<int> arr){
    vector<int> temp;
    int cnt1=0,cnt2=0;
    int n=arr.size();
    int el1=INT_MIN;
    int el2=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(cnt1==0 && el2!=arr[i]){
            cnt1=1;
            el1=arr[i];
        }
        else if(cnt2==0&&el1!=arr[i]){
            cnt2=1;
            el2=arr[i];
        }
        else if(arr[i]==el1) cnt1++;
        else if(arr[i]==el2) cnt2++;
        else{
            cnt1--,cnt2--;
        }
    }
    cnt1=0;
    cnt2=0;
    for(int i=0;i<n;i++){
        if(el1==arr[i]) cnt1++;
        if(el2==arr[i]) cnt2++;
    }
    int mini=(int)(n/3)+1;
    if(cnt1>=mini){
        temp.push_back(el1);
    }
    if(cnt2>=mini) temp.push_back(el2);
    sort(temp.begin(),temp.end());
    return temp;
}
int main(){
    vector<int> arr = {1,2,1,1,3,2,2};
    vector<int> solution=majorityelement(arr);
    for(int x : solution){
        cout<<x<<" ";
    }
}
//Time Complexity: O(N), where N is the size of the input array. We traverse the array twice: once to find potential candidates and once to validate them.

//Space Complexity: O(1), as we are using a constant amount of space for the counters and candidate elements, regardless of the input size.