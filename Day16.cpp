bool areAnagrams(string& s1, string& s2) {
        // Your code here
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        return s1==s2;
        
    }
