class Solution {
  public:

    vector<int> largestSubset(vector<int>& arr) 
    {
    
      
        sort(arr.rbegin(),arr.rend());
        int n=arr.size();
       
        vector<int>ans;
      vector<int>dp(n,1);
      vector<int>hash(n);
      for(int i=0;i<n;i++)
      hash[i]=i;
      int maxi=0,index=-1;
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<i;j++)
          {
              if(arr[j]%arr[i]==0)
              {
                  if(dp[i]<1+dp[j])
                  {
                      dp[i]=1+dp[j];
                      hash[i]=j;
                  }
              }
          }
          if(dp[i]>maxi)
          {
              maxi=dp[i];
              index=i;
          }
      }
      
      while(hash[index]!=index)
      {
          ans.push_back(arr[index]);
          index=hash[index];
      }
      ans.push_back(arr[index]);
    //  reverse(ans.begin(),ans.end());
      
      return ans;
      
      
    }
};