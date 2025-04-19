#include<stdio.h>
void main () {
	int n;
	printf("Enter how many ASCII valuse to print :");
	scanf("%d",&n);
	if( n< 1|| n> 128) {
		printf("Please enter the number between the 0 to 128 \n");
	}else {
		printf("ASCII valuse from 0 to %d:\n",n-1);
		for(int i=0;i <n;i++) {
			printf("ASCII values of %d =%c\n",i,i);
		}
	}
}

