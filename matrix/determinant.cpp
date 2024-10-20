int determinantOfMatrix(vector<vector<int> > matrix, int n)
    {
        // code here 
        if(n==1)return matrix[0][0];
        int ans=0;
        vector<vector<int>> mat(n-1,vector<int>(n-1));
        for(int i=0;i<n;i++){
            int temp=matrix[0][i];
            if(i%2==1){
                temp*=-1;
            }
            for(int j=1;j<n;j++){
                for(int k=0;k<n;k++){
                    if(k!=i){
                        if(k<i)
                        mat[j-1][k]=matrix[j][k];
                        else mat[j-1][k-1]=matrix[j][k];
                    }
                }
            }
            ans+=temp*determinantOfMatrix(mat,n-1);
        }
        return ans;
    }