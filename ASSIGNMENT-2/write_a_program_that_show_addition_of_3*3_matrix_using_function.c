#include<stdio.h>
void matrix(int m[3][3]);
void add_matrix(int mA[3][3], int mB[3][3], int mS[3][3]); 
int main()
{
int x[3][3], y[3][3], z[3][3],i,j; 
printf("enter values for first matrix");
for(i=0;i<3;i++) 
for(j=0;j<3;j++)
{
printf("\n enter values for 2D array=>>>>"); 
scanf("%d",&x[i][j]);
}  
printf("enter values for second matrix");
for(i=0;i<3;i++) 
for(j=0;j<3;j++) 
{
printf("\n enter values for 2D array=>>>>"); 
scanf("%d",&y[i][j]);
}
add_matrix(x,y,z);
printf("\nFirst matrix is :\n"); 
matrix(x);
printf("\nSecond matrix is :\n"); 
matrix(y);
printf("\nNew addition matrix is :\n"); 
matrix(z);
return 0; 
}
void add_matrix(int mA[3][3], int mB[3][3], int mS[3][3]) 
{
int p,q;
for(p=0; p<3; p++) 
for(q=0; q<3; q++)
mS[p][q]=mA[p][q]+mB[p][q]; 
}
void matrix(int m[3][3]) 
{
int p,q;
for(p=0; p<3; p++) 
for(q=0; q<3; q++) 
printf(" %d",m[p][q]); 
printf("\n");
}
