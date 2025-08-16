class Solution {
  public:
    int floorSqrt(int n) 
    {
        if(n==1) return 1;
        int ans=0;
        for(int i=0;i<=n;i++)
        {
            if(i*i>n)
        {
            ans=i-1;
            break;
        }
        }
        return ans;
        
    }
};