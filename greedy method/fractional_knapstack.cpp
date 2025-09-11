#include <iostream>
using namespace std;
void merge(double ratio[], int profit[], int weight[], int lower, int mid, int upper)
{
    int i = lower, j = mid + 1, k = lower;
    double rtemp[upper + 1];
    int ptemp[upper + 1], wtemp[upper + 1];
    while (i <= mid && j <= upper)
    {
        if (ratio[i] > ratio[j])   // this sorting we so sorting in descending order important
        {
            rtemp[k] = ratio[i];
            ptemp[k] = profit[i];
            wtemp[k] = weight[i];
            k++, i++;
        }
        else
        {
            rtemp[k] = ratio[j];
            ptemp[k] = profit[j];
            wtemp[k] = weight[j];
            k++, j++;
        }
    }
    if (i > mid)
    {
        while (j <= upper)
        {
            rtemp[k] = ratio[j];
            ptemp[k] = profit[j];
            wtemp[k] = weight[j];
            k++, j++;
        }
    }
    else
    {
        while (i <= mid)
        {
            rtemp[k] = ratio[i];
            ptemp[k] = profit[i];
            wtemp[k] = weight[i];
            k++, i++;
        }
    }
    for (int i = lower; i <= upper; i++)
    {
        ratio[i] = rtemp[i];
        profit[i] = ptemp[i];
        weight[i] = wtemp[i] ; 
    }
    return ; 
}
void merge_sort(double ratio[], int profit[], int weight[], int lower, int upper)
{
    if (lower < upper)
    {
        int mid = (lower + upper) / 2;
        merge_sort(ratio, profit, weight, lower, mid);
        merge_sort(ratio, profit, weight, mid + 1, upper);
        merge(ratio, profit, weight, lower, mid, upper);
    }
    return;
}
int fractional_knapsack(int profit[], int weight[], int n, int w)
{
    double ratio[n];
    for (int i = 0; i < n; i++)
    {
        ratio[i] = (double)profit[i] / weight[i]; // here we do typecasting int into double
    }
    int lower = 0, upper = n - 1;
    merge_sort(ratio, profit, weight, lower, upper);

    // important concept :- 
    int currentWeight = 0;
    double finalValue = 0.0;

    for (int i = 0; i < n; i++) {
        if (currentWeight + weight[i] <= w) {
            currentWeight += weight[i];
            finalValue += profit[i];
        } else {
            int remain = w - currentWeight;
            finalValue += profit[i] * ((double)remain / weight[i]);
            break;
        }
    }
    return finalValue;
}
int main()
{
    int n, w;
    cout << "enter value of n:";
    cin >> n;
    cout << "maximum weight that it have:";
    cin >> w;
    int profit[n], weight[n];
    cout << "enter values of profit and weight:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> profit[i] >> weight[i];
    }
    int max_sum = fractional_knapsack(profit, weight, n, w);
    cout << max_sum  ; 
}