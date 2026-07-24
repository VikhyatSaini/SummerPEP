#include<bits/stdc++.h>
using namespace std;

//[80,10,90,50,40,5,100]
//tabulation
int rob(int arr[], int n){
    int dp[n+1]={0};
    dp[1]=max(dp[0], arr[0]);

    for(int i=2; i<=n; i++){
        dp[i]=max(dp[i-2]+arr[i-1], dp[i-1]);
    }
    return dp[n];
}

int main(){
    int arr[]={80,10,90,50,40,5,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    int dp[n+1]={0};
    int res=rob(arr, n);
    cout<<res;
}