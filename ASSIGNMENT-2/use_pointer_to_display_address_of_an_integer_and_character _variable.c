#include<stdio.h> 
int main()
{
char ch,*cp; 
int a,*ap;
printf("enter character"); 
scanf("%c",&ch); 
printf("enter intiger"); 
scanf("%d",&a);
cp=&ch; 
ap=&a;
printf("\n Address in ch : %u",cp); 
printf("\n Address in ap : %u",ap);
return 0; 
}
