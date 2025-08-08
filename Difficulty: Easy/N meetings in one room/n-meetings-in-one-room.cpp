class Solution {
  public:

    int maxMeetings(vector<int>& start, vector<int>& end) 
    {
        int n=start.size();
        vector<pair<int,int>>arr;
        for(int i=0;i<n;i++)
        arr.push_back({end[i],start[i]});
        sort(arr.begin(),arr.end());
        int ends=arr[0].first;
         int count=1;
        for(int i=1;i<n;i++)
        {
            if(ends<arr[i].second)
            {
            count++;
            ends=arr[i].first;
            }
        }
        return count;
    }
};