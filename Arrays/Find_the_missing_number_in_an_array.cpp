class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int total = 0;
        for(int i = 0;i<n;i++){
            total+=nums[i];
        }
        int subm = (n*(n+1))/2;
        int ans = subm - total;
        return ans;
    }
};