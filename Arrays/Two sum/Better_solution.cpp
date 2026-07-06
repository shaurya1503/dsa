#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;
vector<int> twoSum(vector<int>& a, int sum){
    vector<pair<int,int>>  numswithindex;
    for(int i=0;i<a.size();i++){
        numswithindex.push_back({a[i],i});
    }
    sort (numswithindex.begin(),numswithindex.end());
    int left=0,right=a.size()-1;
    int cnt=0;
    while(right>left){
       int indexsum=numswithindex[left].first+numswithindex[right].first;
        if(indexsum==sum){
           return {numswithindex[left].second,numswithindex[right].second};
             cnt++;
            break;
        }
        else if(indexsum>sum){
            right--;
        }
        else if(indexsum<sum){
            left++;
        }
    }
    if(cnt==0){
        return {-1,-1};
    }


}
int main(){
    vector<int> a= {2,6,5,8,11};
    int sum=14;
    vector<int> result = twoSum(a, sum);
    if(result[0]==-1 && result[1]==-1){
        cout<<"No such pair exists"<<endl;
    }
    else{
        cout<<"The indices of the two numbers are: "<<result[0]<<" and "<<result[1]<<endl;
    }
    return 0;
}
//Time complexity: O(nlogn) due to sorting
//Space complexity: O(n) due to the additional vector used to store the numbers with their indices