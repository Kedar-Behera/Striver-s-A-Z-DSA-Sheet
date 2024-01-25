bool isValidBST(vector<int> &order) {
  // Write your code here.
  if(order.size() <= 1){
      return true;
  }
  for(int i = 1;i < order.size();i++){
      if(order[i] <= order[i-1]){
          return false;
      }
  }
  return true;
}
