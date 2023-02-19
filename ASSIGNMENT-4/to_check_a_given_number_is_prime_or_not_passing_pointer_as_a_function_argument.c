#include<stdio.h>
void prime (int*);
int main()
{
    int a,*p;
    printf("\n Enter number to check");
    scanf("%d",&a);
    p=&a;
    prime(p);
    return 0;
}
void prime  (int*p)
{
   int a,count=0;
   for(a=1;a<=*p;a++)
   {
       if(*p%a==0)
       count++;
   }
   if(count==2)
   printf("The number is prime");
   else
   printf("The number is not prime");
}
