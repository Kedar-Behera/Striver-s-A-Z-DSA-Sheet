vector<int> printDivisors(int n) {
    // Write your code here
    vector<int>ans;
    for(int i = 1;i<=n;i++){
        if(n%i == 0){
            ans.push_back(i);
        }
    }
    return ans;
}