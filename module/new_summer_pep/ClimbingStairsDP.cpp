#include<bits/stdc++.h>
using namespace std;
//memoization

int waysmemo(int n, int dp[]){
    if(n==0 || n==1) return 1;

    if(dp[n]!=0) return dp[n];

    dp[n]=waysmemo(n-1, dp)+waysmemo(n-2, dp);
    return dp[n];
}
int main(){
    int  n=7;
    // vector<int> dp(n+1, 0);
    int dp[n+1]={0};  //for dp[0] to be 0 we take n+1
    int res=waysmemo(n, dp);
    cout<<res;
}