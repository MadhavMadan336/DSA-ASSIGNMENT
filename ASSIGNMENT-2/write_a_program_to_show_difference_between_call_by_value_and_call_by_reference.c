#include <stdio.h>
void add(int x)
{
     ++x;
     printf("%d \n",x);
}
void sub(int *y)
{
    *y = *y+1;
     printf("%d \n",*y);
}
int main()
{
    int a = 50;
    int b =80;
    int *bb=&b ; 
    add(a);
    sub(bb);
printf("now see thye chages \n");
    printf("%d \n",a);
    printf("%d \n",b);
return 0;
}
