
class Solution {
  public:

    bool checkDuplicatesWithinK(vector<int>& arr, int k) 
    {
        int n=arr.size();
        map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            if(mpp.find(arr[i])==mpp.end())
            mpp[arr[i]]=i;
            else
            {
                if(i-mpp[arr[i]]<=k) return true;
                mpp[arr[i]]=i;
            }
        }
        return false;
    }
    
};