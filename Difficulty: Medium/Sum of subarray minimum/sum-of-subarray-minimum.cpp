class Solution {
  public:
    vector<int> nexti(vector<int>&arr)
    {
        int n=arr.size();
        stack<int>st;
        vector<int>res(n,1);
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && arr[st.top()]>=arr[i])
            {
                st.pop();
            }
            int nextindex=st.empty()?n:st.top();
            res[i]=nextindex-i;
            st.push(i);
        }
        return res;
    }
    vector<int>previ(vector<int>&arr)
    {
        int n=arr.size();
        stack<int>st;
        vector<int>res(n);
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && arr[st.top()]>arr[i])
            st.pop();
            
           int start=(st.empty()?-1:st.top());
           res[i]=i-start;
           st.push(i);
        }
        return res;
    }
    int sumSubMins(vector<int> &arr) 
    {
        int n=arr.size();
        
       vector<int>prev=previ(arr);
       vector<int>next=nexti(arr);
         long long ans=0;
       for(int i=0;i<n;i++)
       {
           ans=ans+(long long)arr[i]*(prev[i]*next[i]);
       }
       return ans;
    }
};