#include<stdio.h>
#define maxr 10
#define maxc 10
int main(){
	int n;
	printf("enter the size of square matrix:");
	scanf("%d",&n);
	int arr[n][n];
	for(int i=0;i<=n-1;i++){
		for(int j=0;j<=n-1;j++){
			printf("enter the %d %d element of matrix: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	} 
	int sum=0;
	int b[n+1][n+1];
	for(int i=0;i<=n-1;i++){
		sum=0;
		for(int j=0;j<=n-1;j++){
        sum=sum+arr[i][j];
	}
	b[i][n]=sum;
	}
	sum=0;
	for(int i=0;i<=n-1;i++){
		sum=0;
		for(int j=0;j<=n-1;j++){
			sum=sum+arr[j][i];
		}
		b[n][i]=sum;
	}
	for(int i=0;i<=n-1;i++){
		for(int j=0;j<=n-1;j++){
		b[i][j]=arr[i][j];
		}
	}
	for(int i=0;i<=n-1;i++){
		for(int j=0;j<=n;j++){
		printf("%d  ",b[i][j]);
		}
		printf("\n");
	}
	for(int i=n;i<=n;i++){
		for(int j=0;j<=n-1;j++){
			printf("%d  ",b[i][j]);
		}
	}
	return 0;
}

