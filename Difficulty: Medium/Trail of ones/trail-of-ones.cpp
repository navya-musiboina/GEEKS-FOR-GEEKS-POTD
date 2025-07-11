class Solution {
  public:
    int func(int n,int prev)
    {
        if(n==0) return 1;
        if(prev==1)
        return func(n-1,0);
        else
        return func(n-1,1)+func(n-1,0);
    }
    int countConsec(int n) 
    {
        int total=pow(2,n);
        int k=func(n,-1);
        return total-k;
    }
};