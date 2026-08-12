#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int daysrequired(vector<int>& arr,int capacity){
    int n=arr.size();
    int day=1,load=0;
    for(int i=0;i<n;i++){
        if(load+arr[i]>capacity){
            day++;
            load=arr[i];
        }
        else load+=arr[i];
    }
    return day;
}
int minimumCapacity(vector<int>& arr,int day){
    int n=arr.size();
    int sum=0;
    int ans=-1;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int low=*max_element(arr.begin(),arr.end());
    int high=sum;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(daysrequired(arr,mid)<=day){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}
int main(){
    vector<int> arr={5, 4, 5, 2, 3, 4, 5, 6};
    int day=5;
    cout<<minimumCapacity(arr,day);

}