#include<stdio.h>
int main()
{
	int a[5],i,sum=0,pro=1;
//Take array element input from the user     
	for(i=0;i<5;i++)
	{
		printf("\n enter the aray element=>>>>");
		scanf("%d",&a[i]);
	}
//sum of array element 
	for(i=0;i<5;i++)
        sum=sum+a[i];

//product of array element 
    for(i=0;i<5;i++)
    pro=pro*a[i];
printf("\n sum of array element =%d\n product of array element=%d",sum,pro);
return 0;
