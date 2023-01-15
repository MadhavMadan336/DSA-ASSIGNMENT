#include<stdio.h>
int main()
{
    int a[10],i,flag=0,key,pos;
    for(i=0;i<10;i++)
    {
        printf("\n Enter elements:>>>>>");
        scanf("%d",&a[i]);
    }
    printf("\n Enter to search a number::::");
    scanf("%d",&key);
    for(i=0;i<10;i++)
    {
        if(a[i]==key)
        {
            pos=i++;
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("\n Number found at %d position",pos);
    else
    printf("\n Number is Not Found");
return 0;
}
