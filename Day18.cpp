    vector<int> search(string& pat, string& txt) {
         vector<int>ans;
       for(int i=0;i<txt.length()-pat.length()+1;i++){
          if(pat[0]!=txt[i])
          continue;
           string str=txt.substr(i,pat.length());
           if(str==pat)
           ans.push_back(i);
       }
       return ans;
    }
