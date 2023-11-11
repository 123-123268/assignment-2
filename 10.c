#include<stdio.h>
int main(){
	int a[3][3];int b[3][3];
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			printf("enter the %d %d element of each matrix respectively: ",i,j);
			scanf("%d %d",&a[i][j],&b[i][j]);
		}
	}
	int k[3][3];
	for(int m=0;m<=2;m++){
		for(int i=0;i<=2;i++){
			int sum=0;
			for(int j=0;j<=2;j++){
				sum=sum + a[i][j]*b[j][m];
			}
			k[i][m]=sum;
		}
	}
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			printf("%d ",k[i][j]);
		}
		printf("\n");
	}
	return 0;
}
