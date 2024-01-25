string compareIfElse(int a, int b) {
	// Write your code here
	string ans = "";
	if(a>b){
		ans = "greater";
		return ans;
	}
	else if(a<b){
		ans = "smaller";
		return ans;
	}
	else{
		ans = "equal";
		return ans;
	}
	return "";
}
