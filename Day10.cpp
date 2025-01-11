class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
       int mexi=INT_MIN;
       int sum=0;
       for(int i=0;i<arr.size();i++)
       {
           sum+=arr[i];
           mexi=max(sum,mexi);
           if(sum<0)
           sum=0;
           
       }
       return mexi;
        
    }
};
