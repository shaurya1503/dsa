#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int maxhours(vector<int>& arr,int hourly){
    int totaltime=0;
    for(int pile:   arr){
    totaltime+=ceil((double)pile/ (double)hourly);
    }
    return totaltime;
}
int speed(vector<int> & arr,int h){
    int low=1,high=*max_element(arr.begin(),arr.end());
    int ans=high;
    while(low<=high){
        int mid=low+(high-low)/2;
        int time=maxhours(arr,mid);
        
        if(time==h)return mid;
        else if(time<h) {
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}
int main(){
    vector<int> arr={3,6,7,11};
    int h=8;
    cout<<speed(arr,h);
}
//Time Complexity: O(N*log(max(a[]))), we apply binary search on our search space to reduce it into half at every step.
//Space Complexity: O(1), since the algorithm does not use any additional space or data structures.