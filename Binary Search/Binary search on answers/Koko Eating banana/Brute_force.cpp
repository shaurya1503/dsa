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
int speed(vector<int>& arr,int h){
    int maxval=*max_element(arr.begin(),arr.end());
    for(int i=1;i<maxval;i++){
        int hours=maxhours(arr,i);
        if(hours<=h) return i;
    }
    return maxval;
}
int main(){
    vector<int> arr={3,6,7,11};
    int h=8;
    cout<<speed(arr,h);
    return 0;
}
//Time Complexity: O(n * max(a[])), since for each possible speed we go through all the piles.
//Space Complexity: O(1), since the algorithm does not use any additional space or data structures.