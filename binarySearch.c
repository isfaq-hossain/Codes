#include<stdio.h>

int binarySearch(int arr[], int key, int start, int end)
{
    while(start <= end){
        int mid = (start + end)/2;

        if(arr[mid] == key){
            return mid;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;

}

int main()
{
    int arr[] = { 2, 3, 4, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Enter a key - ");
    int key;
    scanf("%d",&key);
    int result = binarySearch(arr, key, 0, n-1);
    if(result == -1){
        printf("Element not found\n");
    }
    else{
        printf("Element found at index - %d", result);
    }
}
