#include<stdio.h>
int determinantOfMatrix(int matrix[3][3]) {
    int det = 0;
    for (int i = 0; i < 3; i++) {
        det = det + (matrix[0][i] * (matrix[1][(i + 1) % 3] * matrix[2][(i + 2) % 3] - matrix[1][(i + 2) % 3] * matrix[2][(i + 1) % 3]));
    }
    return det;
}
int main() {
    int matrix[3][3];
    for(int i=0;i<=2;i++){
    	for(int j=0;j<=2;j++){
    		printf("enter the %d%d element of the matrix: ",i,j);
    		scanf("%d",&matrix[i][j]);
		}
	}
    int det = determinantOfMatrix(matrix);
    printf("Determinant: %d\n", det);
    return 0;
}

