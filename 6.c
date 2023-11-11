#include<stdio.h>
int main(){
	for(int i=0;i<20;i++){
		int arr[20];
		printf("enter the %d element:",i+1);
		scanf("%d",&arr[i]);
		int a=0;
		for(int j=0;j<i;j++){
			if(arr[i]==arr[j]){
				a++;
			}
		}
		if(a==0){
			printf("%d\n",arr[i]);
		}
	}
	return 0;
}

