class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        // Your Code Here
        int n=arr.size();
        int left=1;
        int right=1;
        int mexi=arr[0];
        for(int i=0;i<n;i++)
        {
            left=left*arr[i];
            mexi=max(left,mexi);
            if(left==0)
            left=1;
        }
        for(int i=n-1;i>=0;i--)
        {
            right=right*arr[i];
            mexi=max(right,mexi);
            if(right==0)
            right=1;
        }
        return mexi;
    }
};
