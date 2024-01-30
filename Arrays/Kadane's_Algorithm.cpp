long long maxSubarraySum(vector<int> arr, int n)
{   
    //TC - O(n), SC - O(1)
    long long totalSum = 0;
    long long currentSum = 0;

    long long maxSum = 0;
    
    for(int i = 0; i < n; i++) {
        totalSum += arr[i];
        currentSum += arr[i];

        if(currentSum < 0) {
            currentSum = 0;
        }

        if(maxSum < max(totalSum, currentSum)) {
            maxSum = max(totalSum, currentSum);
        }
        
    }

    if(maxSum < max(totalSum, currentSum)) {
        maxSum = max(totalSum, currentSum);
    } 

    return maxSum;
}