#include<stdio.h>
void Fibonacci (int n);
void main()
{
    int n;
    printf("\nEnter the number of terms:");
    scanf("%d",&n);
    printf("\nFibonacci Series up to %d terms:",n);
    Fibonacci(n);
}
void Fibonacci (int f)
{
    int x=0,y=1,z,i;
    for(i=1;i<=f;i++)
    {
        printf("%d",x);
        z=x+y;
        x=y;
        y=z;
    }
}