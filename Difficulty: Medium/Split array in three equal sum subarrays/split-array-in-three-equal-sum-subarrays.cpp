class Solution {
  public:
    vector<int> findSplit(vector<int>& arr) 
    {
        vector<int> res;
        int n=arr.size();
        int sum=accumulate(arr.begin(), arr.end(), 0);
        if (sum%3!=0)return {-1,-1};
        int partSum = sum / 3;
        int target = 0, count = 0;
        for (int i=0;i<n;i++) 
        {
            target+=arr[i];

            if (target==partSum) 
            {
                res.push_back(i);
                count++;
                if(cou==2) break;
                target=0;
               
            }
        }

        if (count ==2) return res;
        return {-1,-1};
    }
};
