#include<stdio.h>
// write a program to input three digit number and display sum of the digits ?
int main()
{
    int a,c,d;
    printf("enter is the three digit number");
    scanf("%d",&a);
    c=a%10;
    a=a/10;
    d=a%10;
    a=a/10;
    printf("%d",a+c+d);

    
    return 0;



}
