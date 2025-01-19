    void sort012(vector<int>& arr) {
        int n=arr.size();
        int low=0;
        int high=n-1;
        int mid=0;
        while(mid<=high)
        {
            if(arr[mid]==0)
            {
                swap(arr[low],arr[mid]);
                low++;
                mid++;
            }
            else if(arr[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(arr[mid],arr[high]);
                high--;
            }
            
        }
    }
