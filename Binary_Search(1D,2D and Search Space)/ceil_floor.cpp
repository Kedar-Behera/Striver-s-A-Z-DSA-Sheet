int floor_value(vector<int> &a, int n, int x){
	int low = 0;
	int high = n-1;
	int ans = -1;
	while(low<=high){
		int mid = low+(high-low)/2;
        if(a[mid]<=x){
			ans = a[mid];
			low = mid+1;

		}
		else{
			high = mid-1;
		}
	}
	return ans;
}
int ceil_value(vector<int> &a, int n, int x){
	int low = 0;
	int high = n-1;
	int ans = -1;
	while(low<=high){
		int mid = low+(high-low)/2;
        if(a[mid]>=x){
			ans = a[mid];
			high = mid-1;

		}
		else{
			low = mid+1;
		}
	}
	return ans;
}

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	pair<int,int>ans;
	int ans1 = floor_value(a,n,x);
	int ans2 = ceil_value(a,n,x);
	ans.first = ans1;
	ans.second = ans2;


	return ans;
}