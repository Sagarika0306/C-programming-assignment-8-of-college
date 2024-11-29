#include<stdio.h>
int Recarea (int x,int y);
void main()
{
    int l,b,a;
    printf("\nEnter the length and breath of a Rectangle:");
    scanf("%d%d",&l,&b);
    a=Recarea(l,b);
    printf("\nThe area of the Rectangle:%d",a);
}
int Recarea (int x,int y)
{
    return(x*y);
}