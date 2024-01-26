void helper(int x,vector<int>& ans){
    if(x == 0){
        return;
    }
    ans.push_back(x);
    helper(x-1,ans);
}

vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int>ans;
    helper(x,ans);
    return ans;
}