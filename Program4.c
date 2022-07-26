#include<stdio.h>
void N(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    N(n);
    return 0;
}
void N(int n1)
{
    int i=1;
    while(i<=n1)
    {
        printf("%d ",i);
        i++;
    }
}
