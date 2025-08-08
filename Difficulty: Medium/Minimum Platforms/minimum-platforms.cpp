class Solution {
  public:
   
    int findPlatform(vector<int>& arr, vector<int>& dep) 
    {
     int  n=arr.size();
     sort(arr.begin(),arr.end());
     sort(dep.begin(),dep.end());
     int i=0,count=0,maxi=0,j=0;
     while(i<n && j<n)
     {
         if(arr[i]<=dep[j])
         {
             count++;
             i++;
         }
         else
         {
             j++;
             count--;
         }
         maxi=max(maxi,count);
     }
     return maxi;
    }
};

