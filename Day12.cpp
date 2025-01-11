int circularSubarraySum(vector<int> &arr) {
        int n = arr.size();
        int curr_max = 0, curr_min = 0;
        int max_sum = INT_MIN, min_sum = INT_MAX;
        int total_sum = 0;
    for (int i = 0; i < n; i++) {
        total_sum += arr[i];
        curr_max = max(arr[i], curr_max + arr[i]);
        max_sum = max(max_sum, curr_max);
        curr_min = min(arr[i], curr_min + arr[i]);
        min_sum = min(min_sum, curr_min);
    }
    if (max_sum < 0) {
        return max_sum;
    }
    int circular_sum = total_sum - min_sum;
    return max(max_sum, circular_sum);
    }
