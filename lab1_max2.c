#include<stdio.h>
int main()
{
    int a,b,max;
    printf("enter any two numbers\t");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        max=a;
    }else{
        max=b;
    }
    printf("the max number is %d\n",max);
    return 0;
}