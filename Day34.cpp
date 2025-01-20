int findPages(vector<int> &arr, int k) {
       int n=arr.size();
       if(k>n)return -1;
       int low=*max_element(arr.begin(),arr.end());
       int sum=0;
       for(int it:arr)
       {
           sum+=it;
       }
       int high=sum;
       int ans=0;
       while(low<=high)
       {
           int mid=(low+high)/2;
           int stud=1,pages=0;
           for(int i=0;i<n;i++)
           {
               if(pages+arr[i]>mid)
               {
                   stud++;
                   pages=arr[i];
               }
               else
               pages+=arr[i];
           }
           if(stud<=k)
           {
               ans=mid;
               high=mid-1;
           }
           else low=mid+1;;
       }
       return ans;
    }
