#include<stdio.h>
void main () {
	int x;
	long  product =1;
	printf("Enter ho many numbers  to multiply :");
	scanf("%d",&x);
	for (int i =1; i <= x;i++) {
		product *=i;
	}
	printf("The product of the first %d natural numbers is : %ld\n",x,product);
}
