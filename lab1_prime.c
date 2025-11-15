#include<stdio.h>
int main()
{
    int n,counter=0;
    printf("enter a number\t");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0){
            counter++;
        }
    }
    if(counter==0){
        printf("%d is a prime number\n",n);
    }else{
        printf("%d is a composite\n",n);
    }
    return 0;
}