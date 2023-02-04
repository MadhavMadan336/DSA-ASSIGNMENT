#include <stdio.h>
int factorial(int n)
{
  int i,fact = 1;
  for (i = 1; i <= n; i++)
    fact = fact * i;
 
  return fact;
}
 
int main()
{
  int a;
 
  printf("Enter a number to calculate its factorial: ");
  scanf("%d", &a);
 
  printf("factorial=%d\n",  factorial(a));
 
  return 0;
}
