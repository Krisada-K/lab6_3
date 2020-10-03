#include <stdio.h>

int main() 
{
  while(1){
   int loop, number,i;
   int prime = 1;
   printf("Enter a number : ");
   scanf("%d",&number);
   if(number<0)break;
   for(loop = 2; loop < number; loop++) {
      if((number % loop) == 0) {
         prime = 0;}}
   if ((prime == 1)&&(number!=1)){
      printf("%d is prime number.\n", number);
      for (i = 1; i <= 12; ++i) {
        printf("%d * %d = %d \n", number, i, number * i);}}
   else
      printf("not a prime number!!!.\n");}
   return 0;
}