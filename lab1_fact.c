#include<stdio.h>
int factorial(int n){
    if(n==0)return 1;
    return n*factorial(n-1);
}
int main(){
    int n;
    printf("enter any number");
    scanf("%d",&n);
    printf("the factorial of %d is %d ",n,factorial(n));
    return 0;
}