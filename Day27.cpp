void mergeArrays(vector<int>& a, vector<int>& b) {
        int n=a.size();
        int m=b.size();
        for(int i=0;i<b.size();i++)
        {
            a.push_back(b[i]);
        }
        sort(a.begin(),a.end());
        b.clear();
        int i=0;
        while(i!=m)
        {
            int num=a.back();
            a.pop_back();
            b.push_back(num);
            i++;
        }
        reverse(b.begin(),b.end());
    }
