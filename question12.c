#include<stdio.h>
/* write a program to make a three digit number form the user and rotate its 
  digits by one position towards the right ?
*/
int main()
{
  int a,b,c,d;
  printf("enter is the three digit number");
  scanf("%d",&a);
  b=a/100;
  c=a%100;
  d=(c*10)+b;
  printf("three digit number rotate one positin right is %d",d);

    return 0;
}