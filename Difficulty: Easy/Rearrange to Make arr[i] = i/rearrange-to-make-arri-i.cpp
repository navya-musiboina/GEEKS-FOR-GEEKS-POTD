class Solution {
  public:
    void modifyArray(vector<int>& arr) 
    {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        
        vector<int> ans(n, -1);

        for (int i = 0; i < n; i++)
        {
          
            if (arr[i] < 0 || arr[i] >= n) 
                continue;

            ans[arr[i]] = arr[i]; 
        }

        for (int i = 0; i < n; i++)
        {
            arr[i] = ans[i];
        }
    }
};
