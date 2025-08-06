class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) 
    {
       int n=arr.size();
       int dup=-1;
       for(int i=0;i<n;i++)
       {
           int index=abs(arr[i])-1;
        if(arr[index]<0)
        dup=index+1;
        else
        arr[index]=-arr[index];
       }
       for(int i=0;i<n;i++)
       {
           if(arr[i]>0)
           return {dup,i+1};
       }
    }
};