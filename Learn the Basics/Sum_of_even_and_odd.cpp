#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin>>n;
	int rem,even = 0,odd = 0;
	while(n>0){
		rem = n%10;
		if(rem%2 == 0){
			even+=rem;
		}
		else{
			odd+=rem;
		}
		n/=10;
	}
	cout<<even<<" "<<odd<<endl;
	
}
