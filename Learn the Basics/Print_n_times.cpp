vector<string> printNTimes(int n) {
	// Write your code here.
	if(n == 0){
          return {};
        }
                vector<string>ans = printNTimes(n-1);
		ans.insert(ans.end(),"Coding Ninjas");
		return ans;
	
}