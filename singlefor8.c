#include<stdio.h>
void main () {
	int n;
	printf("Enter how many multiples of 11 you want:");
	scanf("%d",&n);
	printf("Multiplication Table of 11 in reverse order up to %d :\n",n);
	for ( int i=n;i >=1; i--) {
		printf("11 x %d = %d\n",i, 11* i);
	}
}

