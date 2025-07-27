class Solution {
  public:
    int func(vector<int>&arr,int i,int target,vector<vector<int>>&dp)
    {
        if(i>=arr.size())
          return target==0;
         if(dp[i][target]!=-1) return dp[i][target];
          int lh=0,rh=0;
         if(target-arr[i]>=0)
         lh=func(arr,i+1,target-arr[i],dp);
         rh=func(arr,i+1,target,dp);
         return  dp[i][target]=lh+rh;
    }
    int perfectSum(vector<int>& arr, int target) 
    {
        
        int n=arr.size();
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        return func(arr,0,target,dp);
    }
};