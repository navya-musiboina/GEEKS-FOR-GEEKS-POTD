class Solution {
  public:
     int lowe(vector<int>&arr,int t)
     {
         int start=0;
         int end=arr.size()-1,index=-1;
         while(start<=end)
         {
             int mid=(start+end)/2;
             if(arr[mid]==t)
             {
                 index=mid;
                 end=mid-1;
             }
             else if(arr[mid]>t)
             end=mid-1;
             else
             start=mid+1;
         }
         return index;
         
     }
     int highe(vector<int>&arr,int t)
     {
          int start=0;
         int end=arr.size()-1,index=-1;
         while(start<=end)
         {
             int mid=(start+end)/2;
             if(arr[mid]==t)
             {
                 index=mid;
                 start=mid+1;
             }
             else if(arr[mid]>t)
             end=mid-1;
             else
             start=mid+1;
         }
         return index;
         
     }
    int countFreq(vector<int>& arr, int target) 
    {
        int low=lowe(arr,target);
        int high=highe(arr,target);
        if(low==-1 && high==-1) return 0;
        if(low==-1 || high==-1) return 1;
        return high-low+1;
    }
};
