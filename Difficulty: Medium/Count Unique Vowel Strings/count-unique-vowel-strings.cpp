class Solution {
  public:
    

   int fact(int n)
   {
       if(n==0 || n==1) return 1;
       return n*fact(n-1);
   }
    int vowelCount(string& s) 
    {
       int n=s.size();
       if(n==1) return 0;
       set<char>se={'a','e','i','o','u'};
       
       map<char,int>mpp;
       for(int i=0;i<n;i++)
       {
           if(se.find(s[i])!=se.end())
           mpp[s[i]]++;
       }
       int ans=1;
       int res=fact(mpp.size());
       if(mpp.size()==0) return 0;
       for(auto it:mpp)
       {
           ans=ans*it.second;
       }
       return ans*res;
    }
};
