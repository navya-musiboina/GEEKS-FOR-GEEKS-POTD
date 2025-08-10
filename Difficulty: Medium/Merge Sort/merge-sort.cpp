class Solution {
  public:
    void merge(vector<int>&arr,int l,int m,int r)
    {
        int left=m-l+1;
        int right=r-m;
        int i=0,j=0;
        vector<int>ans;
        while(i<left && j<right)
        {
            if(arr[i+l]<arr[m+j+1])
            {
                ans.push_back(arr[i+l]);
                i++;
            }
            else
            {
                ans.push_back(arr[m+j+1]);
                j++;
            }
        }
        while(i<left)
        {
            ans.push_back(arr[i+l]);
            i++;
        }
        while(j<right)
        {
            ans.push_back(arr[j+m+1]);
            j++;
        }
         j=0;
        for(int i=l;i<=r;i++)
        {
            arr[i]=ans[j++];
        }
    }
    void mergeSort(vector<int>& arr, int l, int r) 
    {
        if(l>=r) return;
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
};