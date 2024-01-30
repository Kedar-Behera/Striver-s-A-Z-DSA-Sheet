class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int element;
        for(int i = 0;i<nums.size();i++){
            if(count == 0){
                element = nums[i];
                count++;
            }
            else if(nums[i] == element){
                count++;
            }
            else{
                count--;
            }
        }

        int count_ans = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == element){
                count_ans++;
            }

        }
        if(count_ans > (nums.size()/2)){
            return element;
        }
        return -1;
    }
};