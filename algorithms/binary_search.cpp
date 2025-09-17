// binary search code 
// time  complexity is  O(logn)

#include <iostream>
using namespace std;
int binary_search(int arr[], int n)
{
    int num;
    cout << "enter number you want to search in array:";
    cin >> num;
    int lower = 0, upper = n - 1;
    while (lower <= upper)
    {
        int mid = lower + ( ( upper - lower ) / 2);
        if (arr[mid] == num)
        {
            return mid;
        }
        else if (arr[mid] > num)
        {
            upper = mid - 1;
        }
        else
        {
            lower = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n = 9;
    int arr[n] = {0, 2, 5, 7, 9, 12, 45, 99, 100}; // given sorted array
    int x = binary_search(arr, n);
    if (x == -1)
    {
        cout << "\nelement not found in array:" << endl;
    }
    else
    {
        cout << "element found at index:" << x << "th" << endl;
    }
}