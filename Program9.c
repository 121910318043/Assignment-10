#include<stdio.h>
int numdig(int,int);
int main()
{
    int k,n,d;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter a digit: ");
    scanf("%d",&d);
    k = numdig(n,d);
    if(k==1)
        printf("Digit \"%d\" found in %d",d,n);
    else
        printf("Digit \"%d\" not found in %d",d,n);
    return 0;
}
int numdig(int n1,int d1)
{
    while(n1>0)
    {
        if(n1%10==d1)
        {
            return 1;
        }
        n1=n1/10;
    }
    return 0;
}

