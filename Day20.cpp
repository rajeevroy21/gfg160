 bool areRotations(string &s1, string &s2) {
        string temp=s1+s1;
        return (temp.find(s2) != string::npos);
    }
