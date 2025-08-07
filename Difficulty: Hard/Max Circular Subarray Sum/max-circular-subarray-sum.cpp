class Solution {
  public:
  
  int maxSubarraySum(vector<int>& arr) {
    int maxEnding = arr[0], maxSoFar = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        maxEnding = max(arr[i], maxEnding + arr[i]);
        maxSoFar = max(maxSoFar, maxEnding);
    }
    return maxSoFar;
}

int minSubarraySum(vector<int>& arr) {
    int minEnding = arr[0], minSoFar = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        minEnding = min(arr[i], minEnding + arr[i]);
        minSoFar = min(minSoFar, minEnding);
    }
    return minSoFar;
}
    int maxCircularSum(vector<int> &arr) 
    {
          int totalSum = 0;
    for (int num : arr) totalSum += num;

    int maxSum = maxSubarraySum(arr);
    int minSum = minSubarraySum(arr);

    // If all numbers are negative, return maxSum directly
    if (maxSum < 0) return maxSum;

    return max(maxSum, totalSum - minSum);
       
    }
};