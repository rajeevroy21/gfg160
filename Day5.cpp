class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        int n=arr.size()-1;
        int i=n;
        while(i>0 && arr[i-1]>=arr[i])
        i--;
        if(i==0)
        {
            reverse(arr.begin(),arr.end());
            return;
        }
        for(int j=n;j>=0;j--)
        {
            if(arr[j]>arr[i-1])
            {
                swap(arr[j],arr[i-1]);
                break;
            }
        }
        reverse(arr.begin()+i,arr.end());
    }
};
