#include<stdio.h>
void main () {
	int x;
	printf("Enter the number 1 to 100 10 print :");
	scanf("%d",&x);
	if( x<1 || x>100) {
		printf("Please enter the number between 1 to 100\n");
	}else{
		for(int i=1;i<=x;i++) {
			printf("%d ",i);
		}
		printf("\n");
	}
}
