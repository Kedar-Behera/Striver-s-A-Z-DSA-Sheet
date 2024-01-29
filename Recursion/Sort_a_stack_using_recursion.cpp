#include <bits/stdc++.h>

void insert(stack<int>& s,int temp){
	if(s.size() == 0 || s.top()<=temp){
		s.push(temp);
		return;

	}
	int top = s.top();
	s.pop();
	insert(s,temp);
	s.push(top);

}

stack<int> sortStack(stack<int> &s)
{
	// Write code here.
	if(s.size()<=1){
		return s;
	}
	int temp = s.top();
	s.pop();
	sortStack(s);
	insert(s,temp);
	return s;
	
	
}