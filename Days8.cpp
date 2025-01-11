int maximumProfit(vector<int> &prices) {
        int sum=prices[0],max=0;
        int n=prices.size();
        for(int i=1;i<n;i++)
        {
            if(sum>prices[i])
            sum=prices[i];
            else if(prices[i]-sum>max)
            max=prices[i]-sum;
        }
        return max;
    }
