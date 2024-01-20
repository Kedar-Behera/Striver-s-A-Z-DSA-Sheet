int first_elementf(vector<int>& arr,int low,int high,int k){

    int first = -1;
    while(low<=high){
        int mid = low+(high-low)/2;
     if(arr[mid] == k){
         first = mid;
         high = mid-1;
     }
     else if(arr[mid]<k){
         low = mid+1;
     }
     else{
         high = mid-1;
     }
    }
    return first;
}

int second_elementf(vector<int>& arr,int low,int high,int k){
    
    int second = -1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid] == k){
            second = mid;
            low = mid+1;
        }
        else if(arr[mid]<k){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return second;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int,int>ans;
    int first_element = first_elementf(arr,0,n-1,k);
    int second_element = second_elementf(arr,0,n-1,k);
    ans.first = first_element;
    ans.second = second_element;
    

    return ans;
    
}




int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	pair<int,int>ans = firstAndLastPosition(arr,n,x);
	if(ans.first == -1) return 0;
    return ans.second - ans.first + 1;

}
