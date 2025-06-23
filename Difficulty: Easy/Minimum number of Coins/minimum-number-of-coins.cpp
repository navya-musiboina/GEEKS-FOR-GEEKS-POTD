class Solution {
  public:
    vector<int> minPartition(int N) 
    {
        vector<int> arr={1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
        vector<int>ans;
        for (int i=arr.size()-1;i>=0;i--)
        {
            if (arr[i]<=N)
            {
                int k=N/arr[i];                     
                N=N%arr[i];                       
                ans.insert(ans.end(), k, arr[i]);        // insert k copies of arr[i]
            }
        }

        return ans;
    }
};
