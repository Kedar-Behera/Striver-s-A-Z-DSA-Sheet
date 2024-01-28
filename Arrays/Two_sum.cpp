class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int>ourmap;
        for(int i = 0;i<nums.size();i++){
            if(ourmap.find(target - nums[i]) != ourmap.end()){
                ans.push_back(ourmap[target - nums[i]]);
                ans.push_back(i);
                return ans;
            }
            ourmap[nums[i]] = i;
        }
        return ans;
    }
};