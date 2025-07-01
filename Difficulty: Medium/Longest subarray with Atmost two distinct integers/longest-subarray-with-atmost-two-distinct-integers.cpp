class Solution {
  public:
    int totalElements(vector<int> &arr) 
    {
        int n=arr.size();
        map<int,int>mpp;
        int j=0,maxi=0;
        for(int i=0;i<n;i++)
        {
            mpp[arr[i]]++;
            while(mpp.size()>2)
            {
                mpp[arr[j]]--;
                if(mpp[arr[j]]==0)
                mpp.erase(arr[j]);
                j++;
            }
            maxi=max(maxi,i-j+1);
        }
        return maxi;
    }
};