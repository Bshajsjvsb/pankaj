#include<stdio.h>
int factorial(int);
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    printf("the factorial of a number is %d",factorial(x));
    return 0;
}

int factorial(int x)
{
  if(x==0)
  return 1;
  else
  return (x*factorial(x-1));
}