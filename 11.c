#include<stdio.h>
void check(int arr[3][3]){
	int k=0,m=0;
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			if(i==j && arr[i][j]==1){
					k++;
			}
			else if(i!=j){
				if(arr[i][j]==0){
					m++;
			}
			}
		}
	}
	if(m==6 && k==3){
	    printf("the given matrix is a unit matrix.");	
	}
	else{
	printf("the given matrix is not a unit matrix.");
	}
	return;
}
int main(){
	int a[3][3];
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			printf("enter the %d %d element of the matrix: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("the given matrix is : \n");
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			printf("  %d  ",a[i][j]);
		}
		printf("\n");
	}
	check(a);
	return 0;
}
