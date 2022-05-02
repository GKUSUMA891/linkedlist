//reverse using recursion
#include<stdio.h>
void reverse(int *n)
{
    if(*n)
    {
        reverse(n+1);                           
        printf("%d\n",*n);                      
    }
}
void main()
{
    int n[]={10,20,30,40,50};
    reverse(n);
}

