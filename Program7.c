#include<stdio.h>
int fact(int);
int main()
{
    int n,r,c;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter r value: ");
    scanf("%d",&r);
    c = fact(n)/(fact(r)*fact(n-r));
    printf("number of combinations = %d",c);
}
int fact(int n)
{
    int s=1;
    while(n>0)
    {
        s=s*n;
        n--;
    }
    return s;
}
