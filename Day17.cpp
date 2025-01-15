  // Function to find the first non-repeating character in a string.
    char nonRepeatingChar(string &s) {
        unordered_map<int,int>mp;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]-'a']++;
        }
        for(int i=0;i<s.length();i++)
        {
            if(mp[s[i]-'a']==1)return s[i];
        }
        return '$';
    }
