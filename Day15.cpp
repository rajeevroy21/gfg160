string addBinary(string& s1, string& s2) {
       string str;
       int i=s1.length()-1;
       int j=s2.length()-1;
       int carry=0;
       while(i>=0 || j>=0 || carry)
       {
           int sum=carry;
           if(i>=0)
           {
               sum+=s1[i]-'0';
               i--;
           }
           if(j>=0)
           {
               sum+=s2[j]-'0';
               j--;
           }
           str+=(sum%2) +'0';
           carry=sum/2;
       }
       reverse(str.begin(),str.end());
        j=0;
       while(j<str.length() && str[j]=='0') j++;
       return str.substr(j);
       return "0";
    }
