class Solution {
public:
    int nonLisMaxSum(vector<int>& arr) {
        int n = arr.size();

        vector<int> dp(n, 1), sumLIS(n), hash(n);
        int maxLen = 1, minSum = arr[0], lastIndex = 0;

        for (int i = 0; i < n; i++) {
            sumLIS[i] = arr[i];
            hash[i] = i;

            for (int j = 0; j < i; j++) {
                if (arr[i] > arr[j]) {
                    if (dp[i] < dp[j] + 1 || 
                       (dp[i] == dp[j] + 1 && sumLIS[i] > sumLIS[j] + arr[i])) {
                        dp[i] = dp[j] + 1;
                        sumLIS[i] = sumLIS[j] + arr[i];
                        hash[i] = j;
                    }
                }
            }

            if (dp[i] > maxLen || (dp[i] == maxLen && sumLIS[i] < minSum)) {
                maxLen = dp[i];
                minSum = sumLIS[i];
                lastIndex = i;
            }
        }

        // Trace LIS
        vector<int> visited(n, 0);
        while (lastIndex != hash[lastIndex]) {
            visited[lastIndex] = 1;
            lastIndex = hash[lastIndex];
        }
        visited[lastIndex] = 1;

        // Compute non-LIS sum
        int total = 0;
        for (int i = 0; i < n; i++) {
            if (visited[i] == 0)
                total += arr[i];
        }

        return total;
    }
};
