class Solution {
  public:
  
    void selectionSort(vector<int> &arr) 
    {
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            int mini=i;
            for(int j=i;j<n;j++)
            {
                if(arr[j]<arr[mini])
                mini=j;
            }
            if(mini!=i)
            swap(arr[mini],arr[i]);
        }
        
    }
};