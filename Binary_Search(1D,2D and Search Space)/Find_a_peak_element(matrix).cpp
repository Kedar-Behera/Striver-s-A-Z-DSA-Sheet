class Solution {
public:

    int find_max_index(vector<vector<int>>& mat,int n,int m,int col){
        int index = -1;
        int max_value = -1;
        for(int i = 0;i<n;i++){
            if(mat[i][col]>max_value){
                max_value = mat[i][col];
                index = i;
            }
        }
        return index;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int low = 0;
        int high = m-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            int max_index = find_max_index(mat,n,m,mid);
            int left = mid-1>0?mat[max_index][mid-1]:-1;
            int right = mid+1<m?mat[max_index][mid+1]:-1;
            if(mat[max_index][mid]>left && mat[max_index][mid]>right){
                return {max_index,mid};
            }
            else if(mat[max_index][mid]<left){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return {-1,-1};
    }
};