 int kthMissing(vector<int> &arr, int k) {
        int count=0;
        set<int>s(arr.begin(),arr.end());
        for(int i=1;i<=10000000;i++)
        {
            if(s.find(i)==s.end())
            count++;
            if(count==k)return i;
        }
        return arr[arr.size()-1];
    }
