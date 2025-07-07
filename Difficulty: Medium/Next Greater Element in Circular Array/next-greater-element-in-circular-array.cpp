class Solution {
  public:
    vector<int> nextLargerElement(vector<int> &arr) 
    {
        int n=arr.size();
        
        stack<int>st;
        vector<int>ans(n,-1);
        
        for(int i=2*n-1;i>=0;i--)
        {
            
            while(!st.empty() && arr[i%n]>=st.top())
            {
                st.pop();
            }
            if(!st.empty() && i<n)
            ans[i]=st.top();
            st.push(arr[i%n]);
        }
        
        return ans;
    }
};