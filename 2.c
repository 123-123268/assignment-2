#include<stdio.h>
int main(){
	int i,j, sum = 0;
	int arr[10];
	for(i=0;i<=9;i++){
		printf("enter the %d number of the array: ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=9;i++){
		sum=sum + arr[i];
	}
	printf("sum of the elements of array is %d \n",sum);
	for(i=0;i<=9;i++){
		arr[i]=arr[i]*3;
		printf("%d  ",arr[i]);
	}
	printf("\n\n\n");
	int table[10]={1,2,3,4,5,6,7,8,9,10};
	for(i=0;i<=9;i++){
		for(j=1;j<=10;j++){
		int a = table[i]*j;
		if(a<10){
			printf("%d  ",a);
		}
		else{
			printf("%d ",a);
		}
		}
		printf("\n");
	}
	
}
