class Solution {
  public:
    int func(vector<int>&arr,int i,int k,vector<vector<int>>&dp)
    {
        if(i>=arr.size())
        {
            return k==0;
        }
        if(dp[i][k]!=-1) return dp[i][k];
        int lh=0,rh=0;
        if(k-arr[i]>=0)
        lh=func(arr,i+1,k-arr[i],dp);
        rh=func(arr,i+1,k,dp);
        return dp[i][k]=lh+rh;
    }
    int countPartitions(vector<int>& arr, int d) 
    {
         int n=arr.size();
        int sum=accumulate(arr.begin(),arr.end(),0);
        if((sum-d)<0 || (sum-d)%2!=0) return 0;
        int k=(sum-d)/2;
        vector<vector<int>>dp(n,vector<int>(k+1,-1));
        return func(arr,0,k,dp);
    }
};