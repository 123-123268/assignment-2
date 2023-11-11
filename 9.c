#include<stdio.h>
void add_marix(int arr1[6][6],int arr2[6][6]);
int main(){
	int a[6][6];
	int b[6][6];
	for(int i=0;i<=5;i++){
		for(int j=0;j<=5;j++){
			printf("enter the %d %d element of each matrix respectively:",i+1,j+1);
			scanf("%d %d",&a[i][j],&b[i][j]);
		}
	}
		add_matrix(a,b);
	return 0;
}
void add_matrix(int arr1[6][6],int arr2[6][6]){
	int res[6][6];
	for(int i=0;i<=5;i++){
		for(int j=0;j<=5;j++){
			res[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
	for(int i=0;i<=5;i++){
		for(int j=0;j<=5;j++){
			if(res[i][j]<=9){
			printf("%d  ",res[i][j]);
		}
		else{
		printf("%d ",res[i][j]);	
		}
		}
		printf("\n");
	}
}
