class Solution {
  public:
    vector<int> find3Numbers(vector<int>& arr) 
    {
        int n=arr.size();
        vector<int>left(n,0),right(n,0);
        left[0]=arr[0];
        right[n-1]=arr[n-1];
        for(int i=1;i<n;i++)
        {
            left[i]=min(left[i-1],arr[i]);
            right[n-i-1]=max(right[n-i],arr[n-i-1]);
        }
        for(int i=0;i<n;i++)
        {
            if(left[i]<arr[i] && arr[i]<right[i])
            return {left[i],arr[i],right[i]};
        }
        return {};
    }
};
