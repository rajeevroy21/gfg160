int aggressiveCows(vector<int> &stalls, int k) {
        sort(stalls.begin(),stalls.end());
        int n=stalls.size();
        int low=0;
        int high=stalls[n-1];
        int ans=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int cow=1;
            int prev=stalls[0];
            for(int i=1;i<n;i++)
            {
                if(stalls[i]-prev>=mid)
                {
                    cow++;
                    prev=stalls[i];
                    if(cow==k)break;
                }
            }
            if(cow==k)
            {
                ans=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        return ans;
        
    }
