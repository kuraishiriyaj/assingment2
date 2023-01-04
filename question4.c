#include<stdio.h>
// write a program to swap two int variables without using third varibles ?
int main()
{
    int a=2,b=7;
    
    b=b+a;
    a=b-a;
    b=b-a;
    printf("a=%d,b=%d",a,b);
}