vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    vector<int>ans;
    int n = arr.size();
    k = k%n;
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.end());
    for(int i = 0;i<n;i++){
        ans.push_back(arr[i]);
    }

    return ans;

}
