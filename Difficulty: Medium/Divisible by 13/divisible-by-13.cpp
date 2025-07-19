class Solution {
  public:
    bool divby13(string &s) 
    {
       int n=s.size();
       int rem=0;
       for(int i=0;i<n;i++)
       {
           int digit=s[i]-'0';
           rem=rem*10+digit;
           rem=rem%13;
    
       }
       return rem==0;
       
    }
};