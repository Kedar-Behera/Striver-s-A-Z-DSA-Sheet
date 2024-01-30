int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    if (a.empty())
        return 0;
    int i = 0;
    int j = 0;
    long long sum = a[0];
    int ans = 0;

    while (j < a.size())
    {
        if (sum == k)
        {
            ans = max(ans, j - i + 1);
            j++;
            if (j < a.size())
                sum += a[j];
        }
        else if (sum < k)
        {
            j++;
            if (j < a.size())
                sum += a[j];
        }
        else
        {
            sum -= a[i];
            i++;
        }
    }
    return ans;

}