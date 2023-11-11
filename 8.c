#include<stdio.h>
int main(){
	int arr[10];
	for(int i=0;i<=9;i++){
		printf("enter the %d element of the array: ",i+1);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<=9;i++){
		if(arr[i]<=9){
		printf("%d    %d    ",i,arr[i]);
	    }
	    else if(arr[i]>9){
	    	printf("%d    %d   ",i,arr[i]);
		}
		for(int j=1;j<=arr[i];j++){
			printf("*");
		}
		printf("\n");
	}
}
