int countDigits(int n){
	// Write your code here.
	int count = 0;
	int temp = n;
	while(temp>0){
		int last_digit = temp%10;
		if(last_digit != 0){
			if(n%last_digit == 0){
				count++;
			}
		}
		temp/=10;
	}	
	return count;
}