#include <iostream>
#include <climits>
using namespace std;

int max_crossing_sum(int arr[], int lower, int mid, int upper) {
    int sum = 0;
    int left_sum = INT_MIN;
    for (int i = mid; i >= lower; i--) {
        sum += arr[i];
        left_sum = max(left_sum, sum);
    }

    sum = 0;
    int right_sum = INT_MIN;
    for (int i = mid + 1; i <= upper; i++) {
        sum += arr[i];
        right_sum = max(right_sum, sum);
    }

    return left_sum + right_sum;
}

int maxsubarraysum(int arr[], int lower, int upper) {
    if (lower == upper) {
        return arr[lower];
    }

    int mid = (lower + upper) / 2;
    int left_sum = maxsubarraysum(arr, lower, mid);
    int right_sum = maxsubarraysum(arr, mid + 1, upper);
    int crossing_sum = max_crossing_sum(arr, lower, mid, upper);

    return max( max (left_sum, right_sum), crossing_sum);
}

int main() {
    int n = 8;
    int arr[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int lower = 0, upper = n - 1;
    int result = maxsubarraysum(arr, lower, upper);

    cout << "Maximum Subarray Sum = " << result << endl;
    return 0;
}
