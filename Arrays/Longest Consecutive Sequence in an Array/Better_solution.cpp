#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;
int longestconsecutive(vector<int>& arr){
    sort(arr.begin(),arr.end());
    int longest=1,cnt=1;
    int smallest=INT_MIN;
    for(int i=0;i<arr.size()-1;i++){

        if(arr[i]+1==arr[i+1]){
            cnt++;
        }
        if(arr[i]+1<arr[i+1]){
            cnt=1;
        }
        longest=max(cnt,longest);
    }
    return longest;
}
int main(){
    vector<int> arr={100, 4, 200, 1, 3, 2};
    cout<<"The most number of consecutive number are "<<longestconsecutive(arr);
}
//Time Complexity: O(n log n), where n is the number of elements in the array. This is due to the sorting step, which is the most time-consuming operation in this approach.

//Space Complexity: O(1), as we are using only a constant amount of extra space.