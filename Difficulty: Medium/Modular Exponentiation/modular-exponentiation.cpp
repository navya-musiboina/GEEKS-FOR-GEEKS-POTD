class Solution {
  public:
  
    int powMod(int x, int n, int M) 
    {
        
        long res=1;
        x=x%M;
        while(n>0)
        {
            if(n&1)
            {
            res=res*x%M;
            n--;
            }
            else
            {
                x=(long )x*x%M;
                n>>=1;
            }
        }
        
        return  res;
        
    }
};