#include<stdio.h>
void reverse(int n, int arr[n]){
	for (int i=0;i<=(n-1)/2;i++){
	int t = arr[i];
	arr[i]=arr[n-1-i];
	arr[n-i-1]=t;
	}
	for(int i=0;i<=n-1;i++){
		printf("%d ",arr[i]);
	}
}

int main(){
	int n;
	printf("enter the size of array : ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<=n-1;i++){
		printf("enter the %d element of the array: ",i+1);
		scanf("%d",&arr[i]);
	}
    reverse(n,arr);
	return 0;
}

