#include<stdio.h>
int main(){
	int n,m,k,l;
	printf("enter the rows and columns of the matrix 1: ");
	scanf("%d %d",&n,&m);
	printf("enter the rows and columns of the matrix 2: ");
	scanf("%d %d",&k,&l);
	int a[n][m];int b[k][l];
    	for(int i=0;i<=n-1;i++){
		for(int j=0;j<=m-1;j++){
			printf("enter the %d %d element of matrix 1: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		for(int i=0;i<=k-1;i++){
		for(int j=0;j<=l-1;j++){
			printf("enter the %d %d element of matrix 2: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	int h=0; 
	if(n==k && m==l){
	for(int i=0;i<=n-1;i++){
		for(int j=0;j<=m-1;j++){
			if(a[i][j]==b[i][j]){
				h++;
			}
			else{
				printf("%d%d elements are not equal.\n",i,j);
			}
		}
	}
		if(h==n*m){
		printf("the given matrx are equal.\n");
		}
		else{
			printf("the given matrix are not equal.\n");
		}
		}
	else{
		printf("the given matrix are not comparable.");
	}
}
