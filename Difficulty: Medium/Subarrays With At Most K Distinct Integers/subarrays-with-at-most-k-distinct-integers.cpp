class Solution {
  public:
    int countAtMostK(vector<int> &arr, int k) 
    {
        int n=arr.size(),j=0;
        map<int,int>mpp;
        int count=0;
        for(int i=0;i<n;i++)
        {
            mpp[arr[i]]++;
            while(mpp.size()>k)
            {
                mpp[arr[j]]--;
               if(mpp[arr[j]]==0)
                mpp.erase(arr[j]);
                j++;
            }
            count+=(i-j+1);
        }
        return count;
    }
};