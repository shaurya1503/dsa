#include<iostream>
using namespace std;
int main(){
    int arr[7]={4,1,2,1,2,3,3};
    int xor1 = 0;
    for(int i=0;i<7;i++){
        xor1 = xor1 ^ arr[i];
    }
    cout << xor1;
}
