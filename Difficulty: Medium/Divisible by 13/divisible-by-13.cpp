class Solution {
  public:
    bool divby13(string &s) 
    {
        int n=s.size();
        int num=0;
        for(int i=0;i<n;i++)
        {
            int rem=s[i]-'0';
            num=num*10+rem;
            if(num>=13)
            num=num%13;
        }
        return num==0;
    }
};