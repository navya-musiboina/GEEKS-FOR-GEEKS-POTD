// User template code in C++

class Solution {
  public:
    bool sentencePalindrome(string &s) 
    {
        int n=s.size();
       string res="";
       for(char ch:s)
       {
           if(isalnum(ch))
           res+=tolower(ch);
       }
       int i=0,j=res.size()-1;
       while(i<j)
       {
           if(res[i]!=res[j])
           return false;
           i++;j--;
       }
       return true;
    }
};