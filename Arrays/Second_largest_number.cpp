#include<bits/stdc++.h>

vector<int> getSecondOrderElements(int n, vector<int> arr) {
    // Write your code here.
    vector<int>ans;
    int small = INT_MAX,second_small = INT_MAX;
    int large = INT_MIN,second_large = INT_MIN;
    for(int i = 0;i<n;i++){
        small = min(small,arr[i]);
        large = max(large,arr[i]);
    }
    for(int i = 0;i<n;i++){
        if(arr[i] < second_small && arr[i] != small){
           second_small = arr[i];
        }
        if(arr[i] > second_large && arr[i] != large){
            second_large = arr[i];
        }
    }
    ans.push_back(second_large);
    ans.push_back(second_small);return ans;

}
