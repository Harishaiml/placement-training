#include <stdio.h>
int factorial (int);
void main()
{
    int fac,n;
    printf("Enter a number:");
    scanf("%d",&n);
    fac=factorial(n);
    printf("The factorial is %d",fac);
}
int factorial (int n)
{
    if(n<=2)
    {
        return n;
    }
    else
    {
    return (n*factorial(n-1));
}}
