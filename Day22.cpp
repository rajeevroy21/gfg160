 int hIndex(vector<int>& citations) {
        // code here
        sort(citations.rbegin(),citations.rend());
        int i=0;
        while(i<citations.size() && citations[i]>i)
        i++;
        return i;
    }
