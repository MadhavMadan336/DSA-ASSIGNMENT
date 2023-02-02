#include<stdio.h> 
int main()
{
int a,b, sum;
int *ptra, *ptrb;
printf("Enter first  Number: ");
scanf("%d", &a);
printf("Enter second Number: "); 
scanf("%d", &b);
ptra = &a; 
ptrb = &b;
sum = *ptra + *ptrb;
printf("Addition=%d",sum);
return 0;
}
