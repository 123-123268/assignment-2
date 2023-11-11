#include<stdio.h>
int main(){
	int i,j,n;
	printf("enter the size of array: ");
	scanf("%d",&n);
	int arr[n];
	for(int i =0;i<=n-1;i++){
		printf("enter the %d element of the array: ",i+1);
		scanf("%d",&arr[i]);
	}
	int res[n];
	for(i=0;i<=n-1;i++){
		res[i]=arr[n-1-i];
		printf("%d ",res[i]);
	}
	return 0;
}
