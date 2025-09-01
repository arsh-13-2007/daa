// merge sort work on divide and conquer technique
#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int partition(int *arr, int lower, int upper)
{
    int pivot = arr[lower];
    int start = lower;
    int end = upper;
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
    swap(&arr[lower], &arr[end]);
    return end;
}
void quick_sort(int *arr, int lower, int upper)
{
    if (lower < upper)
    {
        int loc = partition(arr, lower, upper);
        quick_sort(arr, lower, loc - 1);
        quick_sort(arr, loc + 1, upper);
    }
}
void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%dth element of array:%d\n", i, arr[i]);
    }
}
int main()
{
    int n, num;
    printf("enter number of elements in array :");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements in array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("array before sort : \n");
    print(arr, n);
    int lower = 0, upper = n - 1;
    quick_sort(arr, lower, upper);
    printf("array after  sort :\n ");
    print(arr, n);
}