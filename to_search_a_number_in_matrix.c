#include<stdio.h>
int main()
{
int a[3][3],i,j,key;
	for(i=0;i<3;i++)
    for(j=0;j<3;j++)
	{
		printf("\n enter values for 2D array=>>>>");
		scanf("%d",&a[i][j]);
	}
    printf("\n  matrix are:::>>>");  
    for(i=0;i<3;i++)
    {
    printf("\n");
    for(j=0;j<3;j++)
    printf("%d\t",a[i][j]);
    }
printf("\n Enter number To search:::");
scanf("%d",&key);
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        if(a[i][j]==key)
        printf("\n Element found at a[%d][%d]",i,j);
        else 
        printf("\n Element Not found");
    }
return 0;
}    
