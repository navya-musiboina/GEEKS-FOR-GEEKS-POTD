class Solution {
  public:
    int getSecondLargest(vector<int> &arr) 
    {
        int n=arr.size();
        int fmaxi=-1,smaxi=-1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>fmaxi)
            {
            smaxi=fmaxi;
            fmaxi=arr[i];
            }
            if(arr[i]<fmaxi && arr[i]>smaxi)
            smaxi=arr[i];
        }
        return smaxi;
    }
};