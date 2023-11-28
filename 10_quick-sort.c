/*
10. Write a program to sort an array using quick sort algorithm.
*/ 

#include <stdio.h>

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;

     do{
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i < j){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }while(i < j);

    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}

void quick_sort(int arr[], int low, int high){
    if(low  < high){
        int partitionIndex = partition(arr, low, high);

        quick_sort(arr, low, partitionIndex - 1);//sort left array
        quick_sort(arr,  partitionIndex +1, high);//sort right array
    }
}

void show(int arr[], int size){
    for(int i =0; i<size; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = {5,10,2,3,45,1,100,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    show(arr,n);
    quick_sort(arr,0,n-1);
    show(arr,n);
    return 0;
}