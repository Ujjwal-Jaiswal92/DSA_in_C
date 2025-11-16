#include<stdio.h>
int main()
{
    int num,temp,rev,rem=0;
    printf("enter any number");
    scanf("%d",&n);
    temp=num;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    printf("The reverse of %d is %d "temp,num);
    return 0;
}