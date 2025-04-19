#include<stdio.h>
void main () {
      int sum=0;
      int count =0;
      int number;
      printf("Enter any number :");
      //input doesn't matter to output because first 10 odd no sum  is 100
      scanf("%d",&number);
      for(int i=1;count<10;i +=2)
      {
	      sum +=i;
	      count++;
      }
      printf("sum of the first 10 odd numbers is :%d\n",sum);
}
      
