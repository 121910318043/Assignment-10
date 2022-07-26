#include<stdio.h>
int fact(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d",fact(n));
    return 0;
}
int fact(int n)
{
    int i=1,f=1;
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    return f;
}
