//To print an element at rth row and cth column in a pascal's triangle
#include<iostream>
using namespace std;
int nCr(int n,int r){
    long long res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    
    }
    return res;
}
int main(){
     int row=4,column=2;
    cout<<"The element at row=4 and column=2 is "<<nCr(row-1,column-1);
    return 0;
}
//Time Complexity: O(min(c,r−c)), The loop runs for min(c−1,r−c) iterations because binomial coefficients are symmetric.
//Space Complexity: O(1), constant additional space is used.