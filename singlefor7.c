#include<stdio.h>
void main () {
	int x;
	printf("Enter how many multiples of 12:");
	scanf("%d",&x);
	printf("Multiplication table of 12 up to %d:\n",x);
         for(int i=1;i <=x;i++) {
		printf("12 x %d = %d\n",i,12 *i);
	 }
}


