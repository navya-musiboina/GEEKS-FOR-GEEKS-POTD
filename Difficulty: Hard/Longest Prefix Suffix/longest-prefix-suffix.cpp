class Solution {
  public:
    int getLPSLength(string &s) 
    {
        char ch=s[0];
        int n=s.size();
        vector<int>index;
        for(int i=1;i<n;i++)
        if(s[i]==ch)
        index.push_back(i);
        
        for(int i=0;i<index.size();i++)
        {
            int j=0,t=index[i];
            int ok=1;
            while(t<n)
            {
                if(s[j]==s[t])
                {
                    j++;
                    t++;
                }
                else
                {
                    ok=0;
                    break;
                }
            }
            if(ok)
            return n-index[i];
        }
        return 0;
        
    }
};