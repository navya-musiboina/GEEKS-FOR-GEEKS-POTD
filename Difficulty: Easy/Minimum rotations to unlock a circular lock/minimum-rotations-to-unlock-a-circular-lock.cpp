
class Solution {
  public:
    int rotationCount(long long R, long long D) 
    {
        int total = 0;
        while (R>0&&D>0)
        {
            int r=R%10;
            int d=D%10;

            int mini=min({abs(r-d),abs(r-10)+d,abs(d-10)+r});
            total+=mini;
            R=R/10;
            D=D/10;
        }

        return total;
    }
};
