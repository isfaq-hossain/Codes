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


void Sort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n -1 - i; j++)
        {
            if (a[j] > a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}


int main()
{
    int arr[] = {202,104,304,223,453,123};
    int n = sizeof(arr) / sizeof(arr[0]);
    Sort(arr, n);
    printf("Enter a key - ");
    int key;
    scanf("%d",&key);
    int result = binarySearch(arr, key, 0, n-1);
    if(result == -1){
        printf("Element not found\n");
    }
    else{
        printf("Elements in the array are - ");
        for(int i = 0; i < n; i++)
        {
           printf("%d ",arr[i]);
        }
        printf("\nElement found at index - %d", result);
    }
}
