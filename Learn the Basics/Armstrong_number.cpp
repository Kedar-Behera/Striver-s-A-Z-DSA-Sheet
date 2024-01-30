bool checkArmstrong(int n){
	//Write your code here
	int temp = n;
	int sum = 0;
	int size = 0;
	while(n>0){
		size++;
		n/=10;
	}
	n = temp;
	while(n>0){
		int ld = n%10;
		sum = sum+pow(ld,size);
		n/=10;
	}
	if(sum  == temp){
		return true;
	}
	else{
		return false;
	}
}
