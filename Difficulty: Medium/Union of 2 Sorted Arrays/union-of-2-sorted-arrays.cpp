class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) 
    {
        int n=a.size();
        int m=b.size(),i=0,j=0;
        vector<int>ans;
        while(i<n && j<m)
        {
            if(a[i]<b[j])
            {
                if(!ans.empty() && ans.back()==a[i]){ i++; continue;};
                ans.push_back(a[i]);
                i++;
            }
            else
            {
                if(!ans.empty() && ans.back()==b[j]){j++;continue;};
                ans.push_back(b[j]);
                j++;
            }
        }
        while(i<n)
        {
            if(!ans.empty() && ans.back()==a[i]){i++;continue;};
            ans.push_back(a[i]);
            i++;
        }
        while(j<m)
        {
              if(!ans.empty() && ans.back()==b[j]){j++;continue;};
            ans.push_back(b[j]);
            j++;
        }
        return ans;
    }
};