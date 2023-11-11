#include<stdio.h>
void lowertriangle(int n, int m, int arr[n][m]){
	for(int i=0;i<=m-2;i++){
		for(int j=i+1;j<=n-1;j++){
			arr[j][i]=0;
		}
	}
	for(int i=0;i<=n-1;i++){
		for(int j=0;j<=m-1;j++){
			printf("%d  ",arr[i][j]);
		}
		printf("\n");
	}
	return;
}
int main(){
	int n,m;
	printf("enter the rows and column of the matrix: ");
	scanf("%d %d",&n,&m);
	int arr[n][m];
	for(int i=0;i<=n-1;i++){
		for(int j=0;j<=m-1;j++){
			printf("enter the %d %d element: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	lowertriangle(n,m,arr);
	return 0;
}
