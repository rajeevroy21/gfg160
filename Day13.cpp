class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        unordered_map<int,bool>mp;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>0)
            mp[arr[i]]=1;
        }
        for(int i=1;i<=arr.size()+1;i++)
        {
            if(mp.find(i)==mp.end())
            return i;
        }
        return 1;
    }
};
