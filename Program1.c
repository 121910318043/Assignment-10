#include<stdio.h>
float aoc(int);
int main()
{
    float a,r;
    printf("Enter radius of the circle ");
    scanf("%f",&r);
    a=aoc(r);
    printf("The area of circle = %f sqm",a);

}
float aoc(int r1)
{
    return (3.14 * r1 *r1);
}
