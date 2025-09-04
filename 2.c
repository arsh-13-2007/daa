#include <stdio.h>
void merge(int *arr, int lower, int mid, int higher)
{
    int i = lower, j = mid + 1, k = lower;
    int brr[higher + 1];
    while (i <= mid && j <= higher)
    {
        if (arr[i] <= arr[j])
        {
            brr[k] = arr[i];
            k++, i++;
        }
        else {
            brr[k] = arr[j] ; 
            k++ , j++ ; 
        }
    }
    if ( i > mid ){
        while ( j <= higher){
            brr[k] = arr[j] ; 
            k++ , j++ ; 
        }
    }
    else {
        while (i <= mid ){
            brr[k] = arr[i] ; 
            k++ , i++ ; 
        }

    }
    for ( int i= lower ; i <= higher ; i++){
        arr[i] = brr[i] ; 
    }
}
void merge_sort(int *arr, int lower, int higher)
{
    if (lower < higher)
    {
        int mid = (lower + higher) / 2;
        merge_sort(arr, lower, mid);
        merge_sort(arr, mid + 1, higher);
        merge(arr, lower, mid, higher);
    }
}
void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("elements is:%d\n", arr[i]);
    }
}
int main()
{
    int n;
    printf("enter number of elements:");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements in array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int lower = 0, higher = n - 1;
    merge_sort(arr, lower, higher);
    print(arr, n ); 
}