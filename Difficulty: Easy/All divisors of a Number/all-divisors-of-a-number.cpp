class Solution {
  public:
    void print_divisors(int n) 
    {
        vector<int>ans;
        for(int i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
            cout<<i<<" ";
            if(n/i!=i)
            ans.push_back(n/i);
            }
        }
        reverse(ans.begin(),ans.end());
        for(auto it:ans)
        cout<<it<<" ";
    }
};