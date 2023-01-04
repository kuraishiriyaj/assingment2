#include<stdio.h>
/* write a program to input a number from the user and also input a digit Append a
 digit in the number and print the resulting number ( Example - number=234 and digit=9 then
   the resulting number is 2349 ?
*/
int main()
{
  int a,b,c;
  printf("enter is the number a");
  scanf("%d",&a);
 b=a*10;
 c=b+9;
 printf("appned the digit number is %d",c);
 return 0;
}