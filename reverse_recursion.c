//reverse using recursion
#include<stdio.h>
void reverse(char *n)
{
    if(*n)
    {
        reverse(n+1);
        printf("%c\n",*n);
    }
}
void main()
{
    char m[]="morning";
    reverse(m);
    
   // return 0;
}

