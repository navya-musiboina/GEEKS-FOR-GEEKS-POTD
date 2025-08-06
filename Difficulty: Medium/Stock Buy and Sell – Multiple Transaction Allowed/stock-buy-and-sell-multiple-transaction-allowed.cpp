
class Solution {
  public:
   /* int func(vector<int>&prices,int i,int buy,vector<vector<int>>&dp)
    {
        if(i>=prices.size()) return 0;
        if(dp[i][buy]!=-1) return dp[i][buy];
        if(buy==0)
        {
            int take=func(prices,i+1,!buy,dp)-prices[i];
            int ntake=func(prices,i+1,buy,dp);
            return dp[i][buy]=max(take,ntake);
        }
        else
        {
            int take=func(prices,i+1,!buy,dp)+prices[i];
            int ntake=func(prices,i+1,buy,dp);
            return dp[i][buy]=max(take,ntake);
        }
    }
   */ 
    int maximumProfit(vector<int> &prices) 
    {
        int n=prices.size(),ans=0;
        for(int i=1;i<n;i++)
        {
            if(prices[i]>prices[i-1])
            ans+=prices[i]-prices[i-1];
        }
        return ans;
       
    }
};
