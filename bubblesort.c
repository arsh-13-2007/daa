#include <stdio.h>
void bubble_sort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp ;
            }
        }
    }
    return;
}

void print_array(int *arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return;
}
void intake_array(int *arr, int n)
{
    printf("enter elements of array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    return;
}
int main()
{
    int n;
    printf("enter number of elements of arrays :");
    scanf("%d", &n);
    int arr[n];
    intake_array(arr, n);
    printf("original arrays : ");
    print_array(arr, n);
    printf("\n");
    bubble_sort(arr, n);
    printf("sorted arrays : ");
    print_array(arr, n);
}