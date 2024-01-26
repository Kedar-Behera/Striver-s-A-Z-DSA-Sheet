#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    vector<int>ans;
      reverse(arr.begin(),arr.end());
      reverse(arr.begin(),arr.end()-1);
    for(int i = 0;i<n;i++){
        ans.push_back(arr[i]);
    }
    return ans;
}
