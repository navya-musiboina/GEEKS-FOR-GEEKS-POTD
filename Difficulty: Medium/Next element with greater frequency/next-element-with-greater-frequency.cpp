class Solution {
  public:
    vector<int> findGreater(vector<int>& arr) 
    {
        int n=arr.size();
        stack<int>st;
        vector<int>ans(n,-1);
        map<int,int>mpp;
        for(int i=0;i<n;i++)
        mpp[arr[i]]++;
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && mpp[arr[st.top()]]<=mpp[arr[i]])
            st.pop();
            if(!st.empty())
            ans[i]=arr[st.top()];
            st.push(i);
        }
        return ans;
        
        
        
    }
};
