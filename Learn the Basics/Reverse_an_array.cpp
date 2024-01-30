

vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    vector<int>ans;
    int si = 0;
    int ei = n-1;
    while(si<ei){
        int temp = nums[si];
        nums[si] = nums[ei];
        nums[ei] = temp;
        si++;
        ei--;
    }
    for(int i = 0;i<n;i++){
        ans.push_back(nums[i]);
    }
    return ans;

}
