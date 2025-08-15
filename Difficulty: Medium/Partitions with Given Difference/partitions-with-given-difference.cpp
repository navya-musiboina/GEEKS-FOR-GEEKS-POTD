class Solution {
public:
    int func(vector<int>& arr, int i, int k, vector<vector<int>>& dp)
    {
      
        if(i>=arr.size()) return k==0;
        int take=0,ntake=0;
        if(dp[i][k]!=-1) return dp[i][k];
        if(k-arr[i]>=0)
        take=func(arr,i+1,k-arr[i],dp);
        ntake=func(arr,i+1,k,dp);
        return dp[i][k]=take+ntake;

    }

    int countPartitions(vector<int>& arr, int d) 
    {
        int n=arr.size();
        int t=accumulate(arr.begin(),arr.end(),0);
        int sum=(t-d)/2;
        if((t-d)<0  || (t-d)%2!=0) return 0;
        vector<vector<int>>dp(n,vector<int>(sum+1,-1));
        
        return func(arr,0,sum,dp);
    
    }
};
