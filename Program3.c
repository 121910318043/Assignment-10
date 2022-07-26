#include<stdio.h>
int eo(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d",eo(n));
    return 0;
}
int eo(int n1)
{
    int value = 1;
    if(n1%2)
        value = 0;
    return value;
}
