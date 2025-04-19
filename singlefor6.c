#include<stdio.h>
void main () {
	int x;
	printf("Enter the no in bteween 1 to 100:");
	scanf("%d",&x);
	if( x <0 || x>100) {
		printf("please enter the no betw 1 to 100\n");
               
	}else{
		printf("Numbers from %d to 1 in Revers order:\n",x);
		for (int i=x;i>=1;i--) {
			printf("%d\n ",i);
		}
		printf("\n");
	}
	
}
