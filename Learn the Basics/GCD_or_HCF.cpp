int calcGCD(int n, int m){
    // Write your code here.
    while(n>0 && m>0){
        if(n>m){
            n%=m;
        }
        else{
            m%=n;
        }
    }
    if(n == 0){
        return m;
    }
    return n;
}