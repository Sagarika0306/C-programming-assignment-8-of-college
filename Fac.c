#include<stdio.h>
long int Fac (int x);
void main()
{
    long int f1;
    int n;
    printf("\nEnter the value to find Factorial:");
    scanf("%d",&n);
    f1=Fac(n);
    printf("\nFactorial of the value is:%ld",f1);
}
long int Fac (int x)
{
    long int f=1;
    int i;
    for(i=x;i>=1;i--)
    f=f*i;
    return(f);
}
