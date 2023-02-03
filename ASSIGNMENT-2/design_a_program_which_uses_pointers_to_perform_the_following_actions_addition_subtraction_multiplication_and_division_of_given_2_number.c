#include<stdio.h> 
int main()
{
int a,b, sum,sub,pro,divi; 
int *ptra, *ptrb;
printf("Enter any two Number: "); 
scanf("%d%d", &a, &b);
ptra = &a; 
ptrb = &b;
sum = *ptra + *ptrb; 
sub = *ptra - *ptrb; 
pro = *ptra * *ptrb; 
divi= *ptra / *ptrb;
printf("\nSum= %d , subtraction=%d ,product=%d,division=%d", 
sum,sub,pro,divi);
return 0; 
}
