#include<stdio.h>

int fibo(int n)
{
    if(n==0)return 0;
    if(n==1)return 1;
    return fibo(n-1)+fibo(n-2);
}

int main()
{
    int n;
    printf("Enter the steps to display of fibonacci series:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",fibo(i));
    }
    printf("\n");
    return 0;
}