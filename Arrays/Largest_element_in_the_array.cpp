#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    /*sort(arr.begin(),arr.end());
    return arr[n-1];*/
    int ans = arr[0];
    for(int i = 1;i<arr.size();i++){
         if(arr[i]>ans){
           ans = arr[i];
         }
    }
    return ans;
}
