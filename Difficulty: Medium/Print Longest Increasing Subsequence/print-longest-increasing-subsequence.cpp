class Solution {
  public:
    vector<int> getLIS(vector<int>& arr) 
    {
       int n=arr.size();
       vector<int>dp(n,1);
       vector<int>parent(n);
       for(int i=0;i<n;i++)
       parent[i]=i;
       int maxi=INT_MIN,index=-1;
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<i;j++)
           {
               if(arr[i]>arr[j] && 1+dp[j]>dp[i])
               {
                   dp[i]=1+dp[j];
                   parent[i]=j;
                  
                 
               }
               
           }
        if(dp[i]>maxi)
        {
        maxi=dp[i];
        index=i;
        }
                   
       }
       vector<int>ans;
       while(index!=parent[index])
       {
           ans.push_back(arr[index]);
           index=parent[index];
       }
       ans.push_back(arr[index]);
      reverse(ans.begin(),ans.end());
       return ans;
        
    }
};