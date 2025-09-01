#include <stdio.h>
int binary_search(int *arr, int n, int num)
{
    int lower = 0, higher = n - 1;
    while (lower < higher)
    {
        int mid = (lower + higher) / 2;
        if (arr[mid] == num)
        {
            return mid;
        }
        else if (arr[mid] < num)
        {
            lower = mid + 1;
        }
        else
        {
            higher = mid - 1;
        }
    }
    return -1;
}
void selection_sort(int *arr, int n)
{
    int min = 0;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                int temp = arr[min];
                arr[min] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return ; 
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
    printf("enter number elements in arrays:");
    scanf("%d", &n);
    printf("enter number you want to search from array:");
    scanf("%d", &num);
    int arr[n];
    printf("enter elements in array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    print(arr, n);
    selection_sort(arr, n);
    printf("sorted array:");
    print(arr, n);
    int x = binary_search(arr, n, num);
    if (x == -1)
    {
        printf("element is not found in this array:");
    }
    else
    {
        printf("element found at %dth index", x);
    }
}