// algorithm or question = find majority elements
// use brute force technique 
// time complexity is O(n) ; 

#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[5] = {1, 2, 2, 1, 1};
    int frequency = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; i < n; j++)
        {
            if (arr[i] == arr[j])
            {
                frequency += 1;
                if (frequency > n / 2)
                {
                    cout << "majority element is :" << arr[i] << endl;
                    cout<<frequency<<endl; 
                    break;
                }
                else {
                    continue;
                }
            }
        }
        frequency = 0 ; 
    }
}