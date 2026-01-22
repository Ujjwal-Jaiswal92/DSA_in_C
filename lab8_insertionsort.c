#include<stdio.h>

// insertion sorting
int InsertionSort(int arr[],int n){
     
     for(int i=0;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
     }

    printf("The sorted array after insertion sort:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}


int main(){
    int arr[]={7,8,3,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    InsertionSort(arr,n);
    return 0;
}