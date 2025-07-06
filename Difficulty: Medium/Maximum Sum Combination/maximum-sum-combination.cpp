class Solution {
  public:
    vector<int> topKSumPairs(vector<int>& a, vector<int>& b, int k) 
    {
        
        int n=a.size();
        sort(a.rbegin(),a.rend());
        sort(b.rbegin(),b.rend());
        
      priority_queue<pair<int,pair<int,int>>>pq;
      pq.push({a[0]+b[0],{0,0}});
      
      set<pair<int,int>>visited;
      visited.insert({0,0});
      vector<int>res;
      while(res.size()<k && !pq.empty())
      {
          auto top=pq.top();
          pq.pop();
          int sum=top.first;
          int i=top.second.first;
          int j=top.second.second;
          res.push_back(sum);
          
          if(i+1<n && visited.find({i+1,j})==visited.end())
          {
              pq.push({a[i+1]+b[j],{i+1,j}});
              visited.insert({i+1,j});
          }
          if(j+1<n && visited.find({i,j+1})==visited.end())
          {
          pq.push({a[i]+b[j+1],{i,j+1}});
           visited.insert({i,j+1});
          }
      }
      return res;

    }
};