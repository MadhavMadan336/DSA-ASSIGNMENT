#include <stdio.h>
int sum(int n);
int main()
{
int a,b;
  printf("Enter a positive integer: ");
  scanf("%d", &a);
  b = sum(a);
printf("sum = %d", b);
return 0;
}
int sum(int n)
{
 if (n != 0)
   // sum() function calls itself
return n + sum(n-1); 
else
   return n;
}
