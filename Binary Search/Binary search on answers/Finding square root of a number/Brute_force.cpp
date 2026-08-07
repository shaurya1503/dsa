#include<iostream>
#include<vector>
using namespace std;
int floorsqrt(int n){
    for(int i=1;i<n;i++){
        if((i*i)==n) return i;
        else if((i*i)>n) return i-1;
    }
    return 0; //Hypothetical case
}
int main(){
    int n=35;
    cout<<floorsqrt(n)<<endl;
}
//Time Complexity: O(N), we check for every number from 1 to N.
//Space Complexity: O(1), since the algorithm does not use any additional space or data structures.