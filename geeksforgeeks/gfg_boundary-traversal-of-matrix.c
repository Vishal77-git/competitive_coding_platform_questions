// User function Template in C
// Returns dynamically allocated array of boundary traversal
int *boundaryTraversal(int n, int m, int **mat, int *returnSize) {
    // code here
    int totalElements = 0;
    if(n == 1){
        totalElements = m;
    }
    else if(m == 1){
        totalElements = n;
    }
    else{
        totalElements = 2 * n + 2 * m - 4;
    }
    int *result = (int *)malloc(totalElements * sizeof(int));
    *returnSize = 0;
    
    if(n == 1){
        for(int i = 0; i < m; i++){
            result[(*returnSize)++] = mat[0][i];
        }
        return result;
    }
    if(m == 1){
        for(int j = 0; j < n; j++){
            result[(*returnSize)++] = mat[j][0];
        }
        return result;
    }
    for(int i = 0; i < m; i++){
        result[(*returnSize)++] = mat[0][i];
    }
    for(int j = 1; j < n; j++){
        result[(*returnSize)++] = mat[j][m - 1];
    }
    for(int k = m - 2; k >= 0; k--){
        result[(*returnSize)++] = mat[n - 1][k];
    }
    for(int l = n - 2; l >= 1; l--){
        result[(*returnSize)++] = mat[l][0];
    }
    return result;
}
