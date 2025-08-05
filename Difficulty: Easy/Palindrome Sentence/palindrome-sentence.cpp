class Solution {
  public:
    bool isPalinSent(string &s)
    {
        int n=s.size();
        string ans;
        for(char ch:s)
        {
            if(isalnum(ch))
            ans+=tolower(ch);
        }
        int i=0,j=ans.size()-1;
        while(i<=j)
        {
            if(ans[i]!=ans[j]) return false;
            i++;
            j--;
        }
        return true;
        
    }
};