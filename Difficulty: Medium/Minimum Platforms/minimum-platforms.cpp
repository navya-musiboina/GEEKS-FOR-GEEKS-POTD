class Solution {
  public:
   
    int findPlatform(vector<int>& arr, vector<int>& dep) 
    {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        int i=0,j=0,maxi=0,count=0;
        while(i<arr.size() && j<dep.size())
        {
            if(arr[i]<=dep[j])
            {
                count++;
                i++;
                maxi=max(maxi,count);
            }
            else
            {
                count--;
                j++;
            }
        }
        return maxi;
    }
};

