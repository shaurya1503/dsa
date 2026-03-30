//All the non zero element of the given array comes to left and zeroes go to right
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cout<<"Enter Element "<<i<<" = ";
        cin>>arr[i];
    }
//Brute force approach i.e. making another array which significantly increasing time and space complexity
    /*int temp[n]={};
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            temp[k]=arr[i];
            k++;
        }
    }
    int j=0;
    for(int i=0;i<n;i++){
        arr[i]=temp[j];
        j++;
    }

    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }*/
   //optimal solution - By using two pointers significantly reducing time and space complexity
   int j=-1;
   for(int i=0;i<n;i++){
    if(arr[i]==0){
        j=i;
        break;
        }
   }
   //if there is no 0 in the array
   if (j==-1){
     for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
   }
   for(int i=j+1;i<n;i++){
    if(arr[i]!=0){
    swap(arr[i],arr[j]);
    j++; }
   }
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
 return 0;
}