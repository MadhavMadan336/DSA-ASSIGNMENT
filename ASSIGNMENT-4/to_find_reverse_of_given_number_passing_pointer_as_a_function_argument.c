#include<stdio.h>
void reverse (int*);
int main()
{
    int a,*p;
    printf("\n Enter number to find reverse");
    scanf("%d",&a);
    p=&a;
    reverse(p);
    return 0;
}
void reverse (int*p)
{
   int rev=0;
   while(*p>0)
   {
       rev=(rev*10)+*p%10;
       *p=*p/10;
   }
   printf("\n Reverse=%d",rev);
}
