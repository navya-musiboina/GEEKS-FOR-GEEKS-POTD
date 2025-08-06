class Solution {
  public:
    int findUnique(vector<int> &arr) 
    {
        int xor1=0;
        for(int i=0;i<arr.size();i++)
        xor1^=arr[i];
        return xor1;
        // code here
        
    }
};