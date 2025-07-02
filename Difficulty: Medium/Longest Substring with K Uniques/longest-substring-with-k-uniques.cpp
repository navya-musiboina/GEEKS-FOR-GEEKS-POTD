class Solution {
  public:
    int longestKSubstr(string &s, int k) 
    {
        int n=s.size(),j=0,maxi=-1;
        map<char,int>mpp;
        for(int i=0;i<n;i++)
        {
            mpp[s[i]]++;
            while(mpp.size()>k)
            {
                mpp[s[j]]--;
                if(mpp[s[j]]==0)
                mpp.erase(s[j]);
                j++;
            }
            if(mpp.size()==k)
            maxi=max(maxi,i-j+1);
        }
        return maxi;
    }
};