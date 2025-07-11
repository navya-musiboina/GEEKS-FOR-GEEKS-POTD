class Solution {
  public:
     int n,m;
    int func(string t,string p,int i,int j,vector<vector<int>>&dp)
    {
        if(j>=m) return 1;
        if(i>=n) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int take=0,ntake=0;
        if(t[i]==p[j]) 
        take=func(t,p,i+1,j+1,dp);
        ntake=func(t,p,i+1,j,dp);
        return  dp[i][j]=take+ntake;
    }
    int subseqCount(string &txt, string &pat) 
    {
        n=txt.size();
        m=pat.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return  func(txt,pat,0,0,dp);
    }
};