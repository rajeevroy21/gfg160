  void setMatrixZeroes(vector<vector<int>> &mat) {
       int n=mat.size();
       int m=mat[0].size();
       vector<bool>row(n,0),col(m,0);
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               if(mat[i][j]==0){
                   row[i]=1;
                   col[j]=1;
               }
           }
       }
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++)
           {
               if(row[i]||col[j])
                mat[i][j]=0;
           }
       }
       
    }
