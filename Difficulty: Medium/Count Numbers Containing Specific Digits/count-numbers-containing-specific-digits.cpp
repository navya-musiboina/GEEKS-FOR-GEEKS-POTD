class Solution {
public:
    int countValid(int n, vector<int>& arr) {
        set<int> se(arr.begin(), arr.end());
        vector<int> rem;
        for (int i = 0; i < 10; i++) {
            if (se.find(i) == se.end())
                rem.push_back(i);
        }
        int total = 9 * pow(10, n - 1);
        if (rem.size() == 0) return 0;
        int ans =1;
        
        
       for(int i=0;i<n;i++)
       {
           if(i==0 && se.find(0)==se.end())
           ans*=(rem.size()-1);
           else
           ans*=(rem.size());
       }
        return total-ans;
    }
};
