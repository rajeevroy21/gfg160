vector<int> prefix(const string &s)
  {
      int n=s.size();
        vector<int>lps(n,0);
        int len=0;
        for(int i=1;i<n;i++){
            while(len>0 && s[i]!=s[len])
            len=lps[len-1];
            if(s[i]==s[len]){
                len++;
                lps[i]=len;
            }
       }
       return lps;
  }
    int minChar(string& s) {
        string rev = s;
        reverse(rev.begin(), rev.end());
        string combined = s + "#" + rev;
        vector<int> lps = prefix(combined);
        return s.size() - lps.back();
    }
