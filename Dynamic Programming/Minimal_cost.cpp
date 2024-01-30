int helper(int n,vector<int>&height,int k,vector<int>&dp){
    dp[0] = 0;
    for(int i = 1;i<n;i++){
    int min_steps = INT_MAX;
    
    for(int j = 1;j<=k;j++){
        if(i-j>=0){
            int jump = dp[i-j]+abs(height[i] - height[i-j]);
            min_steps = min(min_steps,jump);
        }


    }
    dp[i] = min_steps;
    }
    return dp[n-1];
}

int minimizeCost(int n, int k, vector<int> &height){

    // Write your code here.
    vector<int>dp(n,-1);
    return helper(n,height,k,dp);

}