int uniqueBinaryTree(int a, int b){
    // Write your code here.
   if(((a == 1 || a == 3) && b == 2) || (a == 2) && (b == 1 || b == 3))
   return true;
   return false;
}