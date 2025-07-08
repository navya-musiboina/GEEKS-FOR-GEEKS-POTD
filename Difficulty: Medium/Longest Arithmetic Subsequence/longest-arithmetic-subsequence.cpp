// User function template for C++

class Solution {
  public:
    int lengthOfLongestAP(vector<int>& arr) 
    {
        int n=arr.size();
        int maxi=1;
        vector<map<int,int>>dp(n);
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                int dif=arr[i]-arr[j];
               
                if(dp[j].find(dif)!=dp[j].end())
                dp[i][dif]=1+dp[j][dif];
                else
                dp[i][dif]=2;
                maxi=max(maxi,dp[i][dif]);
            }
        }
        return maxi;
        // code here
        
    }
};