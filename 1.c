#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
int partition(int *arr, int lower, int higher)
{
    int pivot = arr[lower];
    int start = lower;
    int end = higher;
    while (start < end)
    {
        while (arr[start] <= pivot)
        {
            start++;
        }
        while (arr[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            swap(&arr[start], &arr[end]);
        }
    }
    swap(&arr[end], &arr[lower]);
    return end;
}
void quick_sort(int *arr, int lower, int higher)
{
    if (lower < higher)
    {
        int loc = partition(arr, lower, higher);
        quick_sort(arr, lower, loc - 1);
        quick_sort(arr, loc + 1, higher);
    }
    return;
}
void scan(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    return;
}
void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("element of %dth index is %d\n", i, arr[i]);
    }
}
int main()
{
    int n;
    printf("enter number of elements in array:");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements in array:\n");
    scan(arr, n);
    printf("array  before sort :\n");
    print(arr, n);
    int lower = 0, higher = n - 1;
    quick_sort(arr, lower, higher);
    printf("array after sort :\n");
    print(arr, n);
}