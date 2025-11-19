#include<stdio.h>
int addition(int a, int b){
    return a+b;
}
int subtraction(int a, int b){
    return a-b;
}
int multiplication(int a, int b){
    return a*b;
}
float division(int a,int b){
    return (float)a/b;
}
int main()
{
    int choice,a,b;
    printf("Choose any one operation to do:\n");
    printf("1.add\n2.sub\n3.mul\n4.div\n");
    scanf("%d",&choice);
    printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);
    switch(choice){
        case 1:
            printf("the sum of the two number is:%d\n",addition(a,b));
            break;
        case 2:
            printf("the difference of the two number is:%d\n",subtraction(a,b));
            break;
        case 3:
            printf("the multiplication of the two number is:%d\n",multiplication(a,b));
            break;
        case 4:
            if(b==0){
                printf("error!...division by zero\n");
                break;
            }
            printf("the division of the two number is:%.2f\n",division(a,b));
            break;
        default:
            printf("Invalid choice!!!"\n);
    }
  return 0;  
}