void helper(int x,vector<int>& ans){
    if(x == 0){
        return;
    }
    helper(x-1,ans);
    ans.push_back(x);
}

vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int>ans;
    helper(x,ans);
    return ans;
}