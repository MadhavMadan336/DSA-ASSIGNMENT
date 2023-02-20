#include<stdio.h>
void oddeve (int*);
int main()
{
    int a,*p;
    printf("\n Enter number to check");
    scanf("%d",&a);
    p=&a;
    oddeve(p);
    return 0;
}
void oddeve (int*p)
{
    if(*p%2==0)
    printf("even number");
    else
    printf("odd number");
}
