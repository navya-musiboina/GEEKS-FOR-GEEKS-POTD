// User function Template for C++
class Solution {
  public:
    int findDuplicate(vector<int>& arr) 
    {
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            int index=abs(arr[i])-1;
            if(arr[index]<0)
            return index+1;
            else
            arr[index]=-1*arr[index];
        }
        return -1;
    }
};