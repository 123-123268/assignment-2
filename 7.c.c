#include<stdio.h>
int main(){
int n,a=0,b=0,choice,f=0,k=0,l=0;
int arr[10]={0,0,0,0,0,0,0,0,0,0};
 do{
	printf("enter 1 for first class while 2 for economy class: ");
	scanf("%d",&n);
	if(n==1 && a<5){
		for(int i=0;i<=4;i++){
			if(arr[i]==0){
				arr[i]=1;
				printf("your seat is booked (first) seat number %d\n",i+1);
				a++;
				break;
			}
		}
	}
	else if(n==1 && a==5 && k==1){
	printf("all seats in first class are full do you want to switch in the economy class(enter 1 for yes and 0 for no.): ");
	scanf("%d",&choice);
	if(choice==0){
		printf("next flight in 3 hrs.\n");
	}
	else if(choice == 1){
		for(int j=5;j<=9;j++){
			if(arr[j]==0){
			arr[j]=1;
			printf("your seat is booked in (economy) seat number %d\n",j+1);
			b++;
			break;
		    }
		}
	}	
	}
	else if(n==1 && a==5 && k==0){
		if(n==1){
			printf("all seats in first class are full do you want to switch in the economy class(enter 1 for yes and 0 for no.): ");
			scanf("%d",&choice);
			if(choice==0){
				printf("next flight in 3 hrs.\n");
			}
		    else if(choice == 1){
				for(int j=5;j<=9;j++){
					if(arr[j]==0){
						arr[j]=1;
						printf("your seat is booked in (economy)seat number %d\n",j+1);
						b++;
						k++;
						break;
				    }
				}
			}
		if(n==2){
		    for(int j=5;j<=9;j++){
					if(arr[j]==0){
						arr[j]=1;
						printf("your seat is booked (economy)seat number %d\n", j+1 );
						b++;
						break;
				    }
			    }
			}		
		}	
	}
	
	if(n==2 && b<=4){
		for(int j=5;j<=9;j++){
			if(arr[j]==0){
			    arr[j]=1;
				printf("your seat is booked (economy)seat number %d\n",j+1);
				b++;
				break;
				}
			}
			
	}
		else if(n==2 && b>=5 && l==1){
	    	printf("all the economy class is full do you want a seat in first class ");
			scanf("%d",& choice);
			if(choice == 0){
				printf("next flight in 3 hrs.");
			}
			else if(choice ==1 ){
			for(int i=0;i<=4;i++){
			if(arr[i]==0){
				arr[i]=1;
				printf("your seat is booked(first)seat number %d \n",i+1);
				a++;
				break;
			}
	    	}		
	    }	
	}
	else if(n==2 && b>=5 && l==0){
		printf("enter 1 for first class and 2 for economy : ");
		scanf("%d",&n);
		if(n==2){
			printf("all the economy class is full do you want a seat in first class: ");
			scanf("%d",& choice);
			if(choice == 0){
				printf("next flight in 3 hrs.\n");
			}
			else if(choice ==1 ){
			for(int i=0;i<=4;i++){
			if(arr[i]==0){
				arr[i]=1;
				printf("your seat is booked (first)seat number %d :",i+1);
				a++;
				l++;
				break;
			}
		    }		
		    }
		}
	}
	f=0;
    for(int i =0;i<=9;i++){
    	if(arr[i]==0){
    		f++;
		}
	}
}while(f!=0);
return 0;
}
