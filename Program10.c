#include<stdio.h>
void prime(int);
void factors(int);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    factors(n);
    return 0;
}

void factors(int n)
{   int i=2;
    while(n>=i)
    {
        if(n%i==0)
        {
            prime(i);
        }
        if(n%i==0)
            n=n/i;
        else
            i++;
    }
}

void prime(int n)
{
    int i,flag=0;
    for(i=2;i<=n/2;i++)
    {
            if(n%i==0)
            {
                flag=1;
                break;
            }
    }
    if(flag==0)
        printf("%d ",n);
}
