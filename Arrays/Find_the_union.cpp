#include<bits/stdc++.h>

vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
     set<int>s;
     vector<int>ans;
     for(int i = 0;i<a.size();i++){
         s.insert(a[i]);
     }
     for(int i = 0;i<b.size();i++){
         s.insert(b[i]);
     }
     for(auto it:s){
         ans.push_back(it);
     }

     return ans;
}