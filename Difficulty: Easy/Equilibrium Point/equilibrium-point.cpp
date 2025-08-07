class Solution {
  public:
   
    int findEquilibrium(vector<int> &arr) 
    {
        int n=arr.size();
        vector<int>a(n,0),b(n,0);
        a[0]=arr[0];
        b[n-1]=arr[n-1];
        for(int i=1;i<n;i++)
        a[i]=arr[i]+a[i-1];
        for(int i=n-2;i>=0;i--)
        b[i]=arr[i]+b[i+1];
        
        for(int i=1;i<n-1;i++)
        {
            if(a[i]-arr[i]==b[i]-arr[i])
            return i;
        }
        return -1;
        
        
        
        
    }
};