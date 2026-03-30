//Give the index of an element of an array
#include<bits/stdc++.h>
using namespace std;
int main(){
    //Taking input of the array
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cout<<"Enter Element "<<i<<" = ";
        cin>>arr[i];
    }
    //Asking for the element to be found
    int k;
    cout<<"Enter the element whose index to be find : ";
    cin>>k;
    //Searching for the element
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            cout<<i;
            break;
           
        }
        //if the element is not found it will return -1; 
         cout<<-1;
         break;
    }
    
    return 0;
}