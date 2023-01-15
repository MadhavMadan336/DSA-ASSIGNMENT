#include<stdio.h>
int main()
{
    int a[10],i,sum=0,pro=1;
    for(i=0;i<10;i++)
    {
        printf("\n Enter elements:>>>>>");
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        sum=sum+a[i];
        else
        pro=pro*a[i];
    }
    printf("\n Sum of Total Even=%d and Sum of Total Odd=%d",sum,pro);
return 0;
}
