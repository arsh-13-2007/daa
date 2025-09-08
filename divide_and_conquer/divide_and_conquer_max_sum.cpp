#include <iostream>
#include <climits>
using namespace std;
int max_cross_sum(int arr[], int lower, int mid, int upper)
{
  int sum = 0;
  int left_max =INT_MIN, right_max = INT_MIN;
  for (int i = mid + 1; i <= upper; i++)
  {
    sum = sum + arr[i];
    right_max = max(right_max, sum);
  }
  sum = 0;
  for (int i = mid; i >= lower; i--)
  {
    sum = sum + arr[i];
    left_max = max(left_max, sum);
  }
 
  return left_max + right_max;
}
int maxsubarraysum(int arr[], int lower, int upper)
{
  if (lower == upper)
  {
    return arr[lower];
  }
  int mid = (lower + upper) / 2;
  int lss = maxsubarraysum(arr, lower, mid);
  int rss = maxsubarraysum(arr, mid + 1, upper);
  int css = max_cross_sum(arr, lower, mid, upper);
  return max(max(lss, rss), css);
}
int main()
{
  int n = 8;
  int arr[n];
  cout << "Enter elements:\n";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int lower = 0, upper = n - 1;
  int result = maxsubarraysum(arr, lower, upper);

  cout << "Maximum Subarray Sum = " << result << endl;
  return 0;
}
