int assignCookie(vector<int> &greed, vector<int> &s) {
	// Write your code here.
	sort(greed.rbegin(),greed.rend());
	sort(s.rbegin(),s.rend());
	int total = 0;
	int curr = 0;
	int n = greed.size();
	int m = s.size();
	for(int i = 0;i<n;i++){
		if(curr<m && greed[i]<=s[curr]){
			total++;
			curr++;
		}
	}
	return total;
}
