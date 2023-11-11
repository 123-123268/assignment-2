#include<stdio.h>
int main(){
	int n;
	printf("enter the size of array: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<=n-1;i++){
		printf("enter the %d element: ",i+1);
		scanf("%d", &arr[i]);
	}
	printf("unique numbers are:");
	for(int i =0;i<=(n-1);i++){
		int a=0;
		for(int j=0;j<=n-1;j++){
			if(arr[i]==arr[j]){
				a++;
			}
		}
		a=a-1;
			if(a==0){
				printf("%d\n",arr[i]);
			}
	}
	return 0;
}
