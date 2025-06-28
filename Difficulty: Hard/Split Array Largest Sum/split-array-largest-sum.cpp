class Solution {
public:
    int countSubarrays(vector<int>& arr, int maxSum) {
        int count = 1, sum = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (sum + arr[i] > maxSum) {
                count++;
                sum = arr[i];
            } else {
                sum += arr[i];
            }
        }
        return count;
    }

    int splitArray(vector<int>& arr, int k) {
        int start = *max_element(arr.begin(), arr.end());
        int end = accumulate(arr.begin(), arr.end(), 0);
        int ans = end;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            int count = countSubarrays(arr, mid);

            if (count <= k) {
                ans = mid;
                end = mid - 1; // try smaller sum
            } else {
                start = mid + 1; // need bigger subarray sum
            }
        }

        return ans;
    }
};
