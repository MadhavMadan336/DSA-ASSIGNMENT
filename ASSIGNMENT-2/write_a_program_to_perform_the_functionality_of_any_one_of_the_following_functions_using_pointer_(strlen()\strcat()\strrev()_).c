#include <stdio.h>
int main()
{
   
    char ch [100];
    int count = 0,i; 
    
    scanf("%s", ch);
    printf("%s\n", ch );
    i=0;
    while( *(ch+i) !='\0')
    {
        count ++ ; 
        i++;
    }
    
printf("%d", count );
return 0;
}
