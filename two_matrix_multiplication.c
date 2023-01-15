#include<stdio.h>
int main()
{
int a[2][2],b[2][2],c[2][2],i,j,k;
 printf("enter values for first matrix");
	for(i=0;i<2;i++)
    for(j=0;j<2;j++)
	{
		printf("\n enter values for 2D array=>>>>");
		scanf("%d",&a[i][j]);
	}
printf("enter values for second matrix");
    for(i=0;i<2;i++)
    for(j=0;j<2;j++)
	{
		printf("\n enter values for 2D array=>>>>");
		scanf("%d",&b[i][j]);
	}
printf("\n first matrix is ");  
   for(i=0;i<2;i++)
   {
    printf("\n");
    for(j=0;j<2;j++)
    printf("%d\t",a[i][j]);
   }  
printf("\n second matrix is ");
   for(i=0;i<2;i++)
   {
    printf("\n");
    for(j=0;j<2;j++)
    printf("%d\t",b[i][j]);
   }  
for(i=0;i<2;i++)
for(j=0;j<2;j++)
for(k=0;k<2;k++)
c[i][j]=a[i][j]*b[i][j];
printf("\n multiplacation of matrix ");
  for(i=0;i<2;i++)
   {
    printf("\n");
    for(j=0;j<2;j++)
    printf("%d\t",c[i][j]);
   }  
return 0;
}
