 void rotateby90(vector<vector<int>>& mat) {
        for(int i=0;i<mat.size();i++)
       reverse(mat[i].begin(),mat[i].end());
       
     for(int i=0;i<mat.size();i++){
         for(int j=0;j<i;j++){
             swap(mat[j][i],mat[i][j]);
         }
     }
     
    }
