#include<stdio.h>

int sum(int n){
    if(n==0)return 0;
    return n+sum(n-1);
}

int main(){
    int n,result;
    printf("Enter the number of first natural no. to do sum:");
    scanf("%d",&n);
    result=sum(n);
    printf("The sum of the first %d natural number is:%d\n",n,result);
    return 0;    
}