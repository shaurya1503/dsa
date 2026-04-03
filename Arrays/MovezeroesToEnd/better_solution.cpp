#include<iostream>
#include<vector>
using namespace std;
int main(){
  //Taking the input array
    int n;
    cin>>n;
    vector<int> arr(n-1);
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
  //creating hash array and putting value of all index equal to zero
    int hash[n+1]={0};
    for(int i=0;i<n-1;i++){
        hash[arr[i]]=1;
    }    
  //Checking which element is not present
for(int i=0;i<=n-1;i++){
    if(hash[i]==0){
        cout<<i;
    }
}
return 0;
}
