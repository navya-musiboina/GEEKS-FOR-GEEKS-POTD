// User function Template for C++
class Solution {
  public:

    int cost(vector<int>& arr) 
    {
        int n=arr.size();
        int mini=*min_element(arr.begin(),arr.end());
        return mini*(n-1);
    }
};