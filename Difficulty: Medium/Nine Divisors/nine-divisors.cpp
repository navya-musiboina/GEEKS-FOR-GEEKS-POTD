class Solution {
  public:
  

    int check(int x)
    {
        int count=0;
        for(int i=1;i<=sqrt(x);i++)
        {
            if(x%i==0  && x/i!=i)count+=2;
            else if(x%i==0)count++;
            if(count>9)
            return false;
        }
        if(count==9)
        return true;
        return false;
    }
    int countNumbers(int n) 
    {
        int count=0;
        for(int i=6;i<=sqrt(n);i++)
        {
            if(check(i*i))
            count++;
        }
        return count;
        
    }
};