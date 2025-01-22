 bool searchRowMatrix(vector<vector<int>> &mat, int x) {
        int n=mat.size();
        int m=mat[0].size();
        int i=0,j=m-1;
        for(int i=0;i<n;i++){
        int low=0,high=m-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(mat[i][mid]==x)return 1;
            if(mat[i][mid]>x)
            high=mid-1;
            else
            low=mid+1;
        }
      }
        return 0;
    }
