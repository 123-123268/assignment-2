#include<stdio.h>
void insert(int arr[],int n,int position,int value){
    int b[n+1];
    for(int i=0;i<=position-2;i++){
    	b[i]=arr[i];
	}
	for(int i=position-1;i<=n-1;i++){
		b[i+1]=arr[i];
	}
	b[position-1]=value;
	for(int i=0;i<=n;i++){
		printf("%d ",b[i]);
	}
return;
}

int main(){
int n;
printf("enter the size");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
printf("enter the %d element",i);
scanf("%d",&arr[i]);
}
int position;
printf("enter the position to be inserted");
scanf("%d",&position);
int value;
printf("enter the value");
scanf("%d",&value);
insert(arr,n,position,value);
return 0;
}
