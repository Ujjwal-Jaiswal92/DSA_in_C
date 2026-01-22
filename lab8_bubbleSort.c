#include<stdio.h>

// bubble sorting
int BubbleSort(int arr[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    printf("The sorted array after bubble sort:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}


int main(){
    int arr[]={7,8,3,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    BubbleSort(arr,n);
    return 0;
}