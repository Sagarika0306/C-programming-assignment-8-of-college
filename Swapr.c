#include<stdio.h>
void Swapr (int *x,int *y);
void main()
{
    int a=10,b=20;
    Swapr(&a,&b);
    printf("\na=%d,b=%d",a,b);
}
void Swapr (int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("\nx=%d,y=%d",*x,*y);
}