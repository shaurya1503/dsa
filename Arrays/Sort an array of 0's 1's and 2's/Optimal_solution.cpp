//We can use dutch national flag algorithm for solving this problem in which we are using three pointers.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> sortArray(vector<int>& arr){
    int low=0,mid=0,high=arr.size()-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++,mid++;
        }
        if(arr[mid]==1){
            mid++;
        }
        if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    return arr;
    
}

int main(){
    vector<int> arr={1,0,2,1,0};
    vector<int> solution = sortArray(arr);
    for(int x:solution){
        cout<<x<<" ";
    }
    return 0;
}
//Time complexity : O(N) - The array is transvered using mid pointer only once.
//space complexity : O(1) - Sorting is done in place and no additional space required.