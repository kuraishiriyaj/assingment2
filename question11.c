#include<stdio.h>
/* Assume price of 1 USD is INR 76.23 write a program to take 
the amount in INR and convert it into USD ?
*/
int main()
{
    float INR, USD;
    printf("enter is the INR ");
    scanf("%f",&INR);
      USD= INR/76.23;
    printf("USD is %.2f",USD);
  return 0;
}