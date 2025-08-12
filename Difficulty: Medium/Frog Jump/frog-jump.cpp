class Solution {
public:
    int func(vector<int>& height, int i, int n,vector<int>&dp) 
    {
        
        if(i==n-1) return 0;
        int lh=INT_MAX,rh=INT_MAX;
        if(dp[i]!=-1) return dp[i];
        if(i+1<n)
        lh=abs(height[i]-height[i+1])+func(height,i+1,n,dp);
        if(i+2<n)
        rh=abs(height[i]-height[i+2])+func(height,i+2,n,dp);
        return dp[i]=min(lh,rh);
        
    }

    int minCost(vector<int>& height) {
        int n = height.size();
        vector<int>dp(n,-1);
        return func(height, 0, n,dp);
    }
};
