class Solution {
  public:
    vector<int> countLessEq(vector<int>& a, vector<int>& b) 
    {
        int n=a.size();
        int m=b.size();
        sort(b.begin(),b.end());
        vector<pair<int,int>>ans;
        for(int i=0;i<a.size();i++)
        ans.push_back({a[i],i});
        sort(ans.begin(),ans.end());
        vector<int>res(n,0);
        int j=0;
        for(int i=0;i<n;i++)
        {
            int k=ans[i].first;
            int p=ans[i].second;
            while(j<b.size() && k>=b[j])
                j++;
            res[p]=j;
        }
        return res;

        
    }
};