#include<bits/stdc++.h>
using namespace std;

int helper(vector<int>& dp,int n){
        dp[0] = 0;
        dp[1] = 1;
        for (int i = 2; i <= n; i++) {
          dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
}

int main()
{
        int n;
        cin>>n;
        vector<int>output(n+1,-1);
        int ans = helper(output,n);
        cout<<ans<<endl;
}