class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) 
    {
        int n=arr.size();
        int ones=0,zeros=0,j=0,maxi=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            zeros++;
            while(zeros>k)
            {
                if(arr[j]==0)
                zeros--;
                j++;
            }
            maxi=max(maxi,i-j+1);
            
        }
        
        return maxi;
       
        
    }
};
