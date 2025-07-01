class Solution {
  public:
    int substrCount(string &s, int k) 
    {
        int n=s.size();
        map<char,int>mpp;
        int j=0,count=0;
        for(int i=0;i<n;i++)
        {
            mpp[s[i]]++;
            if(i-j+1>=k)
            {
                if(mpp.size()==k-1)
                count++;
                mpp[s[j]]--;
                if(mpp[s[j]]==0)
                mpp.erase(s[j]);
                j++;
            }
        }
        return count;
        
    }
};