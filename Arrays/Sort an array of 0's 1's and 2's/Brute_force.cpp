//We simply sort the array using any sorting technique, here we are doing it by Quick sort.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int partition(vector<int>& arr, int low, int high) {
        // Choose the last element as pivot
        int pivot = arr[high];

        // Initialize i to place smaller elements
        int i = low - 1;

        // Traverse the array
        for (int j = low; j < high; j++) {
            // If element is smaller than or equal to pivot
            if (arr[j] <= pivot) {
                // Increment i and swap with j
                i++;
                swap(arr[i], arr[j]);
            }
        }

        // Place pivot in correct position
        swap(arr[i + 1], arr[high]);

        // Return pivot index
        return i + 1;
    }

void qs(vector<int>& arr, int low,int high){
    if(low<high){
        int pIndex = partition(arr,low,high);
        qs(arr,low,pIndex-1);
        qs(arr,pIndex+1,high);
    }
}
int main(){
    vector <int> arr ={1,0,2,1,0} ;
        
    
    qs(arr,0,arr.size()-1);
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
} 
//Time complexity : O(NlogN)
//Space complexity : O(1)
