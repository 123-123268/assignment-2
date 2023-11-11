#include<stdio.h>
int main(){
	int n,s;
	printf("enter the size of array:");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<=n-1;i++){
	printf("enter the element %d: ",i+1);
	scanf("%d",&a[i]);
    }
    printf("enter the position to be deleted: ");
    scanf("%d",&s);
    int b[n-1];
    for(int i=0;i<s-1;i++){
    	b[i]=a[i];
	}
	for(int i=s;i<=n-1;i++){
		b[i-1]=a[i];
	}
	for(int i=0;i<=n-2;i++){
		printf("%d ",b[i]);
	}
}
