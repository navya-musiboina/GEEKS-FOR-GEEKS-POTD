class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) 
    {
        int n=arr.size();
        int sum=0,j=0,mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            while(sum>x)
            {
                mini=min(mini,i-j+1);
                sum-=arr[j];
                j++;
            }
        }
        return mini==INT_MAX?0:mini;
    }
};