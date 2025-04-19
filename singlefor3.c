#include<stdio.h>
void main () {
	int n;
	printf("Enter how many 3-digit numbers to print enter in between 1 to 900:");
	scanf("%d",&n);
        if(n < 1|| n>900) {
		printf("Please enter a number between 1 to 900\n");
	} else {
		int count =0;
		for(int i=100;count <n;i++) {
			printf("%d ",i);
			count++;
		}
		printf("\n");
	}
}
