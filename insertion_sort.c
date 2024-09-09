#include <stdio.h>
void insertionSort(int arr[], int n) {
    int i,key,j;
    for (i=1;i<n;i++) {
        key=arr[i];
        j=i-1;
        while (j>=0 && arr[j]>key) {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
        }
            }
int main() {
    int arr[]={22, 11, 15, 4, 16};
    int arr_size=sizeof(arr)/sizeof(arr[0]);
    printf("given array\n");
    for(int i=0;i<arr_size; i++)
        printf("%d ",arr[i]);
    printf("\n");
    insertionSort(arr, arr_size);
    printf("Sorted array+\n");
    for (int i=0;i<arr_size;i++)
        printf("%d ",arr[i]);
    printf("\n");
    return 0;
}