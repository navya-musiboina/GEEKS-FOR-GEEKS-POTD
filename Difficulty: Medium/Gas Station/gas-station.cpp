/*You are required to complete this method*/
class Solution {
  public:
    int startStation(vector<int> &gas, vector<int> &cost) 
    {
       int n=gas.size(),sum=0;
       for(int i=0;i<n;i++)
        sum=sum+gas[i]-cost[i];
        if(sum<0) return -1;
         sum=0;
          int index=0;
        for(int i=0;i<n;i++)
        {
            sum+=gas[i]-cost[i];
            if(sum<0)
            {
                index=i+1;
                sum=0;
            }
        }
        return index;

    }
};