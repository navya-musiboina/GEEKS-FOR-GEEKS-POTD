class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) 
    {
        map<int,int>mpp;
        int sum=0,maxi=0;
        mpp[0]=-1;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
            int dif=sum-k;
            if(mpp.find(dif)!=mpp.end())
            maxi=max(maxi,i-mpp[dif]);
            if(mpp.find(sum)==mpp.end())
            mpp[sum]=i;
        }
        return maxi;
        
    }
};