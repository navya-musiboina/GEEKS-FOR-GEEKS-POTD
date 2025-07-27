
class Solution {
  public:

     int func(vector<int>&stalls,int mid)
     {
         int n=stalls.size();
         int k=stalls[0],count=1;
         for(int i=1;i<n;i++)
         {
             if(stalls[i]-k>=mid)
             {
                 k=stalls[i];
                 count++;
             }
         }
         return count;
     }
    int aggressiveCows(vector<int> &stalls, int k) 
    {
        sort(stalls.begin(),stalls.end());
        int n=stalls.size();
         int start=1,ans=-1;
         int end=stalls[n-1]-stalls[0];
         while(start<=end)
         {
             int mid=(start+end)/2;
             int ch=func(stalls,mid);
             if(ch>=k)
             {
                 start=mid+1;
                 ans=mid;
             }
             else
             end=mid-1;
         }
         return ans;
        
    }
};