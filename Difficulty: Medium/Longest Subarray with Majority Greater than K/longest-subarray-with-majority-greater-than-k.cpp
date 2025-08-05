class Solution {
  public:
    int longestSubarray(vector<int> &arr, int k) 
    {
        int n=arr.size();
        int sum=0,maxi=0;
        map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            sum+=(arr[i]>k)?1:-1;
            if(sum>0)
            maxi=i+1;
            else
            {
                if(mpp.find(sum-1)!=mpp.end())
                maxi=max(maxi,i-mpp[sum-1]);
            }
            if(mpp.find(sum)==mpp.end())
            mpp[sum]=i;
        }
        return maxi;
    }
};