#include<stdio.h>
// write a program to check wheather the given number even or odd using a bitwise operater?
int main()
{
  int a=67;
    if(a&1==0)
    
        printf("this is the even %d",a);
    
    else
    
        printf("this is the odd %d",a);
    
    return 0;
}