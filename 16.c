#include<stdio.h>
int main(){
int n;
printf("enter the size of square matrix:");
scanf("%d",&n);
int a[n][n];
    for(int i=0;i<=n-1;i++){
	for(int j=0;j<=n-1;j++){
    printf("enter the element %d %d: ",i+1,j+1);
    scanf("%d",&a[i][j]);
    }
    }
    int sum = 0;
    for(int i=0;i<=n-1;i++){
	sum =sum +a[i][i];
	}    
	printf("sum of diagonal elements is %d",sum);
	return 0;
}
