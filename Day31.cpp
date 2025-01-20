int peakElement(vector<int> &arr) {
        int n=arr.size();
        for(int i=1;i<n-1;i++)
       {
           if(arr[i-1]<=arr[i] and arr[i]>=arr[i+1])
           {
               return i;
               break;
           }
       }
       if(n==1 || arr[0]>arr[1])
       return 0;
       return arr[n-1];
    }
