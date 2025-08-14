
class Solution {
  public:
    int LongestBitonicSequence(int n, vector<int> &nums)
    {
        vector<int>arr=nums;
       
        vector<int>dp(n,1),dp1(n,1);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(arr[i]>arr[j] && 1+dp[j]>dp[i])
                dp[i]=1+dp[j];
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            for(int j=n-1;j>i;j--)
            {
                if(arr[i]>arr[j] && dp1[i]<1+dp1[j])
                dp1[i]=1+dp1[j];
            }
        }
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            if(dp[i]>1 && dp1[i]>1)
            maxi=max(maxi,dp[i]+dp1[i]-1);
        }
        return maxi;
        
    }
};
