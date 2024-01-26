class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int n = nums2.size();
        unordered_map<int,int>umap;
        stack<int>st;
        for(int i = n-1;i>=0;i--){
            int ele = nums2[i];
            while(!st.empty() && st.top()<=ele){
                st.pop();
            }
            int res = (st.empty())? -1:st.top();
            umap.insert({ele,res});
            st.push(ele);
        }
        for(auto x:nums1){
            ans.push_back(umap[x]);
        }


        return ans;
    }
};