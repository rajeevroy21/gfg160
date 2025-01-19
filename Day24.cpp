static bool solve(const vector<int>& a, const vector<int>& b) {
      return a[0] < b[0];
   }
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        sort(arr.begin(), arr.end(), solve);
        vector<vector<int>> ans;
        ans.push_back(arr[0]);
        
      for (int i = 1; i < arr.size(); ++i) {
        vector<int>& last = ans.back();
        
        if (arr[i][0] <= last[1]) {
            last[1] = max(last[1], arr[i][1]);
        } else {
            ans.push_back(arr[i]);
        }
    }
    return ans;
    }
