#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N;
    cin>>N;
    vector<int> arr(N-1);
    for(int i=0;i<N-1;i++){
        cin>>arr[i];
    }
    int xor1=0,xor2=0;
    int n=N-1;
    for(int i=0;i<n;i++){
        xor2 = xor2 ^ arr[i]; 
        xor1 = xor1 ^ (i+1);
    }
    xor1=xor1 ^ N;
    cout<<(xor1^xor2);
return 0;
}
