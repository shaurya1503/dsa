#include<bits/stdc++.h>
using namespace std;
//finding a number in an array of size n-1 with distinct integer in range of [1,n].
int main(){
    //taking input of the array
    int n;
    cin>>n;
    vector<int> arr(n-1);
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }

    //calculating sum of the array given7
    int actualsum=0;
    for(int i=0;i<n-1;i++){
        actualsum+=arr[i];
    }
    
    //to find the sum of an array with all the number in it till from 1 to n.
    int expectedsum;
    expectedsum = (n)*(n+1)/2;

    cout<<"The missing element in the array is : "<<expectedsum-actualsum;
return 0;
}