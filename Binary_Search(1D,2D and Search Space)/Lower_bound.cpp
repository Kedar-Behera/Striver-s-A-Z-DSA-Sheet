int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int low = 0,high = n;
	int ans = n;
	while(low<=high){
		int mid = low+(high-low)/2;
		if(arr[mid]>=x){
			high = mid-1;
			ans = mid;
		}
		else{
			low = mid+1;
		}
	}
	return ans;
}
