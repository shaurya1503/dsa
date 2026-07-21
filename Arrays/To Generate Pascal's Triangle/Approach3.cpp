//To generate the entire Pascal’s Triangle for the first N rows
#include<iostream>
using namespace std;
int main(){
    int  n=5;
    for(int i=1;i<=n;i++){
        int ans=1;
        cout<<ans<<" ";
        for(int j=1;j<i;j++){
            ans=ans*(i-j)/j;
            cout<<ans<<" ";
        }
    cout<<endl;
}
return 0;
}
//Time Complexity: O(N^2),we generate all the elements in first N rows sequentially one by one..
//Space Complexity: O(1), no additional space used for storing anything.
