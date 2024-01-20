int singleNonDuplicate(vector<int>& arr) {
    int n = arr.size();
    int low = 0;
    int high = n - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;
        
        // Check if mid is even or odd and adjust the pointers accordingly
        if (mid % 2 == 1) {
            if (arr[mid] == arr[mid - 1]) {
                low = mid + 1;
            } else {
                high = mid;
            }
        } else {
            if (arr[mid] == arr[mid + 1]) {
                low = mid + 2;
            } else {
                high = mid;
            }
        }
    }

    return arr[low];
}
