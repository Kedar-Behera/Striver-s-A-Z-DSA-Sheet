#include<bits/stdc++.h>

vector<int> countFrequency(int n, int x, vector<int> &nums){
    // Write your code here.
    vector<int>ans(n);
   for(int i = 0;i<n;i++){
       ans[nums[i] - 1]++;
   }
   return ans;
}