// User function Template for C++

class Solution {
  public:
    int func(vector<int>& val, vector<int>& wt, int capacity,vector<vector<int>>&dp,int i)
    {
        if(capacity==0) return 0;
        if(i>=val.size()) return 0;
        if(dp[i][capacity]!=-1) return dp[i][capacity];
        int take=0,ntake=0;
        if(capacity-wt[i]>=0)
        take=val[i]+func(val,wt,capacity-wt[i],dp,i);
        ntake=func(val,wt,capacity,dp,i+1);
        return dp[i][capacity]=max(take,ntake);
        
        
    }
    int knapSack(vector<int>& val, vector<int>& wt, int capacity) 
    {
        int n=val.size();
        vector<vector<int>>dp(n,vector<int>(capacity+1,-1));
        return func(val,wt,capacity,dp,0);
    }
};