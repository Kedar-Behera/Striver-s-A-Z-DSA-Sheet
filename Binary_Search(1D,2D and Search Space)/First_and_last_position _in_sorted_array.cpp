class Solution {
public:

    int search_first(vector<int>& nums,int target){
        int size = nums.size();
        int low = 0, high = size-1;
        int result = -1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums[mid] == target){
                result = mid;
                high = mid-1;
            }
            else if(nums[mid]>target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }

        return result;
    }

    int search_second(vector<int>& nums,int target){
        int size = nums.size();
        int low = 0, high = size-1;
        int result = -1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums[mid] == target){
                result = mid;
                low = mid+1;
            }
            else if(nums[mid]>target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }

        return result;
    }



    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2,-1);

        int first_position = search_first(nums,target);
        if(first_position == -1){
            return ans;
        }
        int second_position = search_second(nums,target);
        ans[0] = first_position;
        ans[1] = second_position;
        return ans;
        
    }
};