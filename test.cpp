#include <bits/stdc++.h>

using namespace std;

const int C = 1000000;
long long c[31];
long long dp[31][C];
long long dfs(int i, long long w){
    if(w < 0){
        return 0;
    }
    if(i == 0){
        return 1;
    } else{
        if(dp[i][w] != -1) return dp[i][w];
        return dp[i][w] = dfs(i - 1, w) +  dfs(i - 1, w - c[i - 1]);
    }
}
int main(){
    long long n,w;
    cin>>n>>w;
    for (int i = 0; i < n; i++){
        cin>>c[i];
    }
    memset(dp,-1,sizeof(dp));
    cout<<dfs(n, w)<<endl;
    return 0;
}
