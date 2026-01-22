#include<stdio.h>

// selection sorting
int SelectionSort(int arr[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        int min =i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
              
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    
    printf("The sorted array after selection sort:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}


int main(){
    int arr[]={7,8,3,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    SelectionSort(arr,n);
    return 0;
}