#include<stdio.h>
void main () {
	int x;
	printf("Enter the number between 1 to 100:");
	scanf("%d",&x);
	if( x<0 || x> 100) {
		printf(" Please enter the number between 1 to 100\n");
	}else {
		printf("Even numbers from 1 to %d are:\n",x);
		for(int i=1;i<=x;i++){
			if(i%2 ==0){
				printf("%d ",i);
			}
		}
		printf("\n");
	}
}

