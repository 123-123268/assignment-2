#include<stdio.h>
int main(){
	int n,m=0,h;
	printf("enter the size of array:");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<=n-1;i++){
	printf("enter the element %d: ",i+1);
	scanf("%d",&a[i]);
	}
	for(int i=0;i<=n-1;i++){
		m=0;
		for(int j=0;j<=n-1;j++){
			if(a[i]==a[j]){
				m++;
			}
		}
			printf("%d occurs %d times\n",a[i],m);
	}
return 0;	
}
