#include<iostream>
using namespace std;
int main(){
  //Taking input for the array
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int current_count=0,max_count=0;
    for(int i=0;i<n;i++){
        if(a[i]==1) {
            current_count++;
            if(current_count>max_count){
                max_count=current_count; //whenever the current_count becomes larger than max_count the max_count will be updated
            }
        }
        else current_count = 0; //if the streak end the current_count will return to 0
    }
    cout<<max_count;
    return 0 ;
}
