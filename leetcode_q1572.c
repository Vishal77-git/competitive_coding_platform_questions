int diagonalSum(int** mat, int matSize, int* matColSize) {
    int diagonal_sum = 0;
    for(int i = 0; i < matSize; i++){
        for(int j = 0; j < matSize; j++){
            if(i == j){
                diagonal_sum += mat[i][j];
            }
            if(i + j == matSize - 1){
                diagonal_sum += mat[i][j];
            }

        }
    }
    if(matSize % 2 != 0){
        diagonal_sum -= mat[matSize / 2][matSize / 2];
    }
    return diagonal_sum;
}