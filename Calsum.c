#include<stdio.h>
int Calsum (int x,int y,int z);
void main()
{
    int a,b,c,s;
    printf("\n Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    s=Calsum(a,b,c);
    printf("\n Sum is=%d",s);
}
int Calsum (int x,int y,int z)
{
    int d;
    d=x+y+z;
    return(d);
}