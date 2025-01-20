int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
        for(int i=0;i<a.size();i++)
        {
            b.push_back(a[i]);
        }
        sort(b.begin(),b.end());
        return b[k-1];
    }
