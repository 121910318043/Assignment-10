#include<stdio.h>
int si(int,int,int);
int main()
{
    int p,r,t;float s;
    printf("Enter amount: ");
    scanf("%d",&p);
    printf("Enter rate of Interest: ");
    scanf("%d",&r);
    printf("Enter Duration or time: ");
    scanf("%d",&t);
    s=si(p,r,t)/100.0;
    printf("SI in %d rate and %dth year for the amount Rs %d/- = Rs %f/-",r,t,p,s+p);
    return 0;
}
int si(int p1,int r1,int t1)
{
    return p1*r1*t1;
}
