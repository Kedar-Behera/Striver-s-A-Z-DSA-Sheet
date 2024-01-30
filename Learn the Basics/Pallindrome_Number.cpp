class Solution {
public:
    bool isPalindrome(int x) {
        long long dupli = x;
        long long reverse_no = 0;
        while(x>0){
            long long ld = x%10;
            reverse_no = (reverse_no*10)+ld;
            x=x/10;
        }
        if(dupli == reverse_no)return true;
        else return false;
    }
};