int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.	
	int low  = 0,high = n-1;
	int ans = n;
	while(low<=high){
		int mid = low+(high-low)/2;
		if(arr[mid]>x){
			ans = mid;
			high = mid-1;
		}
		else{
			low = mid+1;
		}
	}
	return ans;
}

int count_smallEquals(vector<vector<int>>&mat,int n,int m,int x){
    int cnt = 0;
    for(int i = 0;i<n;i++){
        cnt+=upperBound(mat[i],x,m);
    }
    return cnt;
}

int median(vector<vector<int>> &mat, int n, int m) {
    // Write your code here.
    int low = INT_MAX;
    int high = INT_MIN;
    for(int i = 0;i<n;i++){
        low = min(low,mat[i][0]);
        high = max(high,mat[i][m-1]);
    }
    int req = n*m/2;
    while(low<=high){
        int mid = low+(high-low)/2;
        int smallEquals = count_smallEquals(mat,n,m,mid);
        if(smallEquals<=req){
            low = mid+1;
        }
        else{
            high = mid-1;
        }

    }
    return low;
}