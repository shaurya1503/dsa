#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int stockSell(vector<int>& arr){
    int n=arr.size();
    int maxProfit=0;
    for(int i=0;i<n;i++){
        int difference=0;
        for(int j=i;j<n;j++){
            if(arr[i]<arr[j]){
                difference=arr[j]-arr[i];
                maxProfit=max(difference,maxProfit);
            }
        }
    }
    if(maxProfit>0) return maxProfit;
    else return 0;
    
}
int main(){
    vector<int> prices={7,6,4,3,1};
    cout<<"The maximum profit is "<<stockSell(prices);
}
//Time Complexity: O(n²) Because for each element, we are checking every future element nested loops.

//Space Complexity: O(1) No extra space used, only variables for storing max profit.