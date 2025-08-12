class Solution {
  public:
    int upperBound(vector<int>& arr, int target) 
    {
     
     int n=arr.size();
     int start=0,end=n-1,index=n;
     while(start<=end)
     {
         int mid=(start+end)/2;
         if(arr[mid]>target)
         {
             index=mid;
             end=mid-1;
         }
         else
         {
             start=mid+1;
         }
     }
     return index;
     
    }
};
