class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        sort(arr.begin(),arr.end());
        for(int i=arr.size()-1;i>=1;i--)
        {
            if(arr[i]!=arr[i-1])return arr[i-1];
        }
        return -1;
    }
};
