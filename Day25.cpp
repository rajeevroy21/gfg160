static bool solve(const vector<int>& a, const vector<int>& b) {
      return a[0] < b[0];
   }
    vector<vector<int>> insertInterval(vector<vector<int>> &intervals,
                                       vector<int> &newInterval) {
        intervals.push_back(newInterval);
    sort(intervals.begin(), intervals.end(), solve);
        vector<vector<int>> ans;
        ans.push_back(intervals[0]);
        
      for (int i = 1; i < intervals.size(); ++i) {
        vector<int>& last = ans.back();
        
        if (intervals[i][0] <= last[1]) {
            last[1] = max(last[1], intervals[i][1]);
        } else {
            ans.push_back(intervals[i]);
        }
    }
    return ans;
    }
