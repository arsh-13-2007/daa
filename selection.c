#include <stdio.h>
void selection_sort(int *arr, int n)
{
  
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                int temp = arr[min];
                arr[min] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void print(int *arr, int n)
{
    printf("array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void input(int *arr, int n)
{
    printf("enter elements of the array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    input(arr, n);
    print(arr, n);
    selection_sort(arr, n);
    print(arr, n);
}