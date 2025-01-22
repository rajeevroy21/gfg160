 vector<int> spirallyTraverse(vector<vector<int> > &matrix) {
        // code here
        int rowBegin=0,rowEnd=matrix.size()-1;
        int colBegin=0,colEnd=matrix[0].size()-1;
        vector<int>result;
        if(matrix.size()==0)return result;
       while (rowBegin <= rowEnd && colBegin <= colEnd) {
        // Traverse right
        for (int i = colBegin; i <= colEnd; ++i) {
            result.push_back(matrix[rowBegin][i]);
        }
        rowBegin++;

        // Traverse down
        for (int i = rowBegin; i <= rowEnd; ++i) {
            result.push_back(matrix[i][colEnd]);
        }
        colEnd--;

        // Traverse left (if still within bounds)
        if (rowBegin <= rowEnd) {
            for (int i = colEnd; i >= colBegin; --i) {
                result.push_back(matrix[rowEnd][i]);
            }
            rowEnd--;
        }

        // Traverse up (if still within bounds)
        if (colBegin <= colEnd) {
            for (int i = rowEnd; i >= rowBegin; --i) {
                result.push_back(matrix[i][colBegin]);
            }
            colBegin++;
        }
    }

    return result;
    }
