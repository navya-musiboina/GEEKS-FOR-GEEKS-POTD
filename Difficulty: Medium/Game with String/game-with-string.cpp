class Solution {
  public:
    int minValue(string &s, int k) 
    {
        priority_queue<int>pq;
        map<int,int>mpp;
        for(int i=0;i<s.size();i++)
        mpp[s[i]]++;
        
        for(auto it:mpp)
        pq.push(it.second);
        
        while(!pq.empty() && k>0)
        {
            int p=pq.top();
            pq.pop();
            if(p>1)
            pq.push(p-1);
            k--;
        }
        int ans=0;
        while(!pq.empty())
        {
           ans+=(pq.top()*pq.top()); 
           pq.pop();
        }
        
        return ans;
        
    }
};