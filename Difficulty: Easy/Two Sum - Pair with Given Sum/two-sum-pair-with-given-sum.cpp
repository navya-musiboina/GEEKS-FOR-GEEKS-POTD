class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) 
    {
       int n=arr.size();
       map<int,int>mpp;
       for(int i=0;i<n;i++)
       {
           int x=target-arr[i];
           if(mpp.find(x)!=mpp.end()) return true;
           mpp[arr[i]]++;
       }
       return false;
    }
};