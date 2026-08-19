#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;
int allowedPages(vector<int> arr,int pages){
    int n=arr.size();
    int student=1;
    int pagesStudent=0;
    for(int i=0;i<n;i++){
        if(pagesStudent+arr[i]<=pages){
            pagesStudent+=arr[i];
        }
        else {
            student++;
            pagesStudent=arr[i];
    }
}
    return student;
}
int maximumpages(vector<int> arr,int student){
    int n=arr.size();
    if(student>n) return -1;
    int ans=-1;
    int low=*max_element(arr.begin(),arr.end()),high=accumulate(arr.begin(),arr.end(),0);
    while(high>=low){
        int mid=low+(high-low)/2;
        int cntstudent=allowedPages(arr,mid);
        if(cntstudent<=student) {
            ans=mid;
            high=mid-1;
        }
        if(cntstudent>student){
            low=mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr={25,46,28,49,24};
    int student=4;
    cout<<maximumpages(arr,student);
}
//Time Complexity: O(N * log(sum(arr[])-max(arr[])+1)), where N = size of the array, sum(arr[]) = sum of all array elements, max(arr[]) = maximum of all array elements.

//Space Complexity:  O(1) as we are not using any extra space to solve this problem.