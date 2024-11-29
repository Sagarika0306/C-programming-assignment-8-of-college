#include<stdio.h>
long int Facr (int x);
void main()
{
    long int f1;
    int n;
    printf("\nEnter the value to find Factorial:");
    scanf("%d",&n);
    f1=Facr(n);
    printf("\nFactorial of the value is:%ld",f1);
}
long int Facr (int x)
{
    if(x==0)
        return 1;
    else
        return(x*Facr(x-1));
}
