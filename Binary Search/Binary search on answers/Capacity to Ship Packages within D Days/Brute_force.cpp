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
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    for(int i=*max_element(arr.begin(),arr.end());i<=sum;i++){
        if(daysrequired(arr,i)<=day) return i;
    }
    return -1;
}
int main(){
    vector<int> arr={5, 4, 5, 2, 3, 4, 5, 6};
    int day=5;
    cout<<minimumCapacity(arr,day);

}