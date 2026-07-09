#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int stockSell(vector<int>& prices){
    int n=prices.size();
    int mini=prices[0];
    int maxProfit=0;
    for(int i=0;i<n;i++){
        int cost=prices[i]-mini;
        maxProfit=max(maxProfit,cost);
        mini=min(mini,prices[i]);
    }
    if(maxProfit>0)return maxProfit;
    else return 0;

}
int main(){
    vector<int> prices={7,1,5,3,6,4};
    cout<<"The maximum profit is "<<stockSell(prices);
}
//Time Complexity: O(n),This is because we are iterating through the array of prices exactly once. There are no nested loops or recursive calls.

//Space Complexity: O(1),Only two variables are used to store the minimum price and maximum profit, regardless of the input size.