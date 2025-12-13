#include<stdio.h>

int counter=0;

int TOH(int n,char *source, char *destination,char *auxilary){
        if(n!=0){
            counter++;
            TOH(n-1,source,auxilary,destination);
            printf("Moving %d disk from %s to %s\n",n,source,destination);
            TOH(n-1,auxilary,destination,source);
        }
        return counter;
}
int main()
{
    int n,result;
    printf("Enter the number of the disk to perform TOH:");
    scanf("%d",&n);
    result=TOH(n,"p1","p2","p3");
    printf("The minimum number of the steps for the %d number of disk is:%d\n",n,result);
    return 0;
}