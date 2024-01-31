#include <bits/stdc++.h>

void dfs(int curr,vector<int> &visited,vector<int>adj[],vector<int>&temp){
    visited[curr]=1;
    temp.push_back(curr);
    for(auto adjacent:adj[curr]){
        if(!visited[adjacent]){
            dfs(adjacent,visited,adj,temp);
        }
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    vector<vector<int>>ans;
    vector<int>adj[V];
    for(auto it:edges){
        adj[it[0]].push_back(it[1]);
        adj[it[1]].push_back(it[0]);
    }

    vector<int>visited(V,0);
    for(int i=0;i<V;i++){
        vector<int>temp;
        if(!visited[i]){
            dfs(i,visited,adj,temp);
            ans.push_back(temp);
            temp.clear();
        }
    }

    return ans;



}