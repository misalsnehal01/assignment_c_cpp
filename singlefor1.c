#include<stdio.h>
void main () {
	int x;
	char ch='A';
	printf("Enter the number to print alphabate  (A to Z):");
	scanf("%d",&x);
	if(x<1 || x>26) {
		printf("Please enter the no in between 1 to 26\n");
	} else {
		for (int i=0;i<x;i++) {
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
}
