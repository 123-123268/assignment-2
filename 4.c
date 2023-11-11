#include<stdio.h>
int main(){
	int n;
	printf("enter the size of array:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<=n-1;i++){
		printf("enter the %d element: ",i+1);
		scanf("%d",&arr[i]);
	}
	int a=0;
	for(int i=0;i<=n-2;i++){
		for(int j=i+1;j<=n-1;j++){
			if(arr[i]==arr[j]){
				a++;
			}
		}
	}
	printf("Total number of duplicate elements are %d",a);
	return 0;
}
