//To print whole row of pascals triangle
#include<iostream>
using namespace std;
int main(){
    int row=4,column=2;
    int ans=1;
    cout<<ans;
    for(int i=0;i<=row;i++){
        ans=ans*(row-i)/i;
        cout<<ans<<" ";
    }

    return 0;
}
//Time Complexity: O(N), we iterate N times to compute each element of the row in O(1) time using the direct relation.
//Space Complexity: O(N), additional space used for storing the Nth row.