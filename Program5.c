#include<stdio.h>
void onn(int);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    onn(n);
    return 0;
}
void onn(int n1)
{
    int s=1,i=1;
    while(i<=n1)
    {
        printf("%d ",s);
        s=s+2;
        i++;
    }
}

