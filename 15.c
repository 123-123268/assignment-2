#include<stdio.h>
void transpose(int n,int m,int arr[n][m]){
	int b[m][n];
	for(int i=0;i<=n-1;i++){
		for(int j=0;j<=m-1;j++){
			b[j][i]=arr[i][j];
		}
	}
	for(int i=0;i<=m-1;i++){
		for(int j=0;j<=n-1;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	return;
}
int main(){
	int n,m;
	printf("enter the number of column and rows: ");
	scanf("%d %d",&n,&m);
	int a[n][m];
	for(int i=0;i<=n-1;i++){
		for(int j=0;j<=m-1;j++){
			printf("enter the %d %d element of the matrix: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	transpose(n,m,a);
	return 0;
}
