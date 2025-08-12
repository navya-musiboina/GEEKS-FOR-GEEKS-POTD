class Solution {
  public:
    int func(vector<int>&arr,int k,int i,int n,vector<int>&dp)
    {
        if(i==n-1) return 0;
        if(dp[i]!=-1) return dp[i];
        int mini=INT_MAX;
        for(int j=1;j<=k;j++)
        {
            int lh=0;
            if(i+j<n)
            {
                lh+=abs(arr[i]-arr[i+j])+func(arr,k,i+j,n,dp);
                mini=min(mini,lh);
            }
        }
        return dp[i]=mini;
    }
    int minimizeCost(int k, vector<int>& arr) 
    {
        int n=arr.size();
        vector<int>dp(n,-1);
        return func(arr,k,0,n,dp);
    }
};