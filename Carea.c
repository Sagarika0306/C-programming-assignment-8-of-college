#include<stdio.h>
float Carea (float r);
void main()
{
    float r,a;
    printf("\nEnter radius of a circle:");
    scanf("%f",&r);
    a=Carea(r);
    printf("\nThe area of the circle:%.2f",a);
}
float Carea (float r)
{
    float x;
    x=3.14*r*r;
    return(x);
}