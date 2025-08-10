class Solution {
  public:
    int check(string s,int i,int j)
    {
        int count=0;
        while(i>=0 && j<s.size() && s[i]==s[j])
        {
            if(j-i+1>=2)
            count++;
            i--;j++;
        }
      return count;
    }
    int countPS(string &s) 
    {
        int n=s.size();
        int total=0;
        for(int i=0;i<n;i++)
        {
            total+=check(s,i,i+1);
            total+=check(s,i,i);
            
        }
        return total;
    }
};