class Solution {
  public:
    int maxLength(vector<int>& arr) 
    {
        int n=arr.size(),sum=0,maxi=0;
        map<int,int>mpp;
        mpp[0]=-1;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(mpp.find(sum)!=mpp.end())
            maxi=max(maxi,i-mpp[sum]);
            else
            mpp[sum]=i;
        }
        return maxi;
    }
};