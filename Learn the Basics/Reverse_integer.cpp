class Solution {
public:
    long int reverse_no = 0;
    int reverse(int x) {
          
        if(x>= 2147483648 || x<= -2147483648){
            return 0;
        }
        if(x>0){
        while(x>0){
        int last_digit = x%10;
        x/=10;
        
        reverse_no = reverse_no*10+last_digit;
        
        }
        }
        else{
            x = x*(-1);
        while(x>0){
        int last_digit = x%10;
        x/=10;
        reverse_no = reverse_no*10+last_digit;
        
        }

        reverse_no = -1*reverse_no;
        }
        if(reverse_no>= 2147483648 || reverse_no<= -2147483648){
            return 0;
        }
        

        return int(reverse_no);
    }
};