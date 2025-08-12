class Solution {
  public:
    int findFloor(vector<int>& arr, int x) 
    {
        int n=arr.size();
        int start=0,end=n-1,index=-1;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(arr[mid]<=x)
            {
                index=mid;
                start=mid+1;
            }
            else
            end=mid-1;
        }
        return index;
        
    }
};
