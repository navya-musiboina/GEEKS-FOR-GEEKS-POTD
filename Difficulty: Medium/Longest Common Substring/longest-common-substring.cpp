class Solution {
  public:
      int maxi=0;
     int func(string &s1,string &s2,int i,int j,int n,int m,vector<vector<int>>&dp)
     {
          if(i>=n || j>=m)return 0;
          if(dp[i][j]!=-1)return dp[i][j];
          int take=0;
          if(s1[i]==s2[j])
          {
              take=1+func(s1,s2,i+1,j+1,n,m,dp);
          }
          int nottake=0;
          nottake=max(func(s1,s2,i+1,j,n,m,dp),func(s1,s2,i,j+1,n,m,dp));
          maxi=max({maxi,take,nottake});
          return dp[i][j]= take;
          
          
     }
    int longestCommonSubstr(string& s1, string& s2) 
    {
       int n=s1.size();
       int m=s2.size();
       vector<vector<int>>dp(n,vector<int>(m,-1));
       func(s1,s2,0,0,n,m,dp);
       return maxi;
    }
};