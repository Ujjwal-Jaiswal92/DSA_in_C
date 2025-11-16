#include<stdio.h>
int main()
{
    int num,temp,rem,sum=0;
    printf("enter any number");
    scanf("%d",num);
    temp=num;
    while(num!=0){
        rem=num%10;
        sum+=rem;
        num/=10;
    }
    printf("The sum of the digits of %d is %d "temp,num);
    return 0;
}