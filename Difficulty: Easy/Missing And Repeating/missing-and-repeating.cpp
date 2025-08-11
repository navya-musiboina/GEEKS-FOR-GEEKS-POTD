class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) 
    {
       int n=arr.size(),dup=-1,mis=-1;
       for(int i=0;i<n;i++)
       {
           int index=abs(arr[i])-1;
           if(arr[index]<0)
           dup=index+1;
           else
           arr[index]=-1*arr[index];
           
       }
       for(int i=0;i<n;i++)
       {
           if(arr[i]>0)
           {
           mis=i+1;
           break;
           }
       }
       return {dup,mis};
    }
};