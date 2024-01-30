int lowerBound(vector<int> &arr, int n, int x) {
	// Write your code here
	int low = 0,high = n-1;
	int ans = n;
	while(low<=high){
		int mid = low+(high-low)/2;
		if(arr[mid]>=x){
			ans = mid;
			high = mid-1;
			//ans = mid;
		}
		else{
			low = mid+1;
		}
	}
	return ans;
}


int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    //    Write your code here.
    int idx = -1;
    int cnt_max = 0;
    for(int i = 0;i<n;i++){
        int cnt_ones = 0;
        cnt_ones = m-lowerBound(matrix[i],m,1);
        if(cnt_ones>cnt_max){
            cnt_max = cnt_ones;
            idx = i;
        }
    }
    return idx;

}