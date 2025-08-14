// User function Template for C++

class Solution {
  public:
    int func(vector<int>&price,int n,int i,vector<vector<int>>&dp)
    {
        if(n==0 || i>=price.size()) return 0;
        int take=0,ntake=0;
        if(dp[i][n]!=-1) return dp[i][n];
        if(n-(i+1)>=0)
        take=price[i]+func(price,n-(i+1),i,dp);
        ntake=func(price,n,i+1,dp);
    
        return dp[i][n]=max(take,ntake);
    }
    int cutRod(vector<int> &price) 
    {
        int n=price.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return func(price,n,0,dp);
        
    }
};