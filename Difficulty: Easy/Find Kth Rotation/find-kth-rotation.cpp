class Solution {
  public:
    int findKRotation(vector<int> &arr) 
    {
        int n=arr.size();
        int start=0,end=n-1,mini=INT_MAX,index=-1;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(arr[start]<=arr[mid])
            {
                if(arr[start]<mini)
                {
                    index=start;
                    mini=arr[start];
                }
                start=mid+1;
            }
            else
            {
                if(arr[mid]<mini)
                {
                    index=mid;
                    mini=arr[mid];
                }
                end=mid-1;
            }
        }
        return  index;

    }
};
