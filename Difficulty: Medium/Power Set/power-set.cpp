class Solution {
  public:
    vector<string> AllPossibleStrings(string s) 
    {
        int n=s.size();
        vector<string>ans;
        for(int i=0;i<pow(2,n);i++)
        {
            string sub="";
            for(int j=0;j<n;j++)
            {
                if(i&(1<<j))
                sub+=s[j];
            }
            if(!sub.empty())
            ans.push_back(sub);
        }
          sort(ans.begin(),ans.end());
          return ans;
    }
};