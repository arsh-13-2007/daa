// x^n
#include <iostream>
using namespace std;
int main()
{
    int n, x;
    cout << "enter values of x :";
    cin >> x;
    cout << "enter values of n:";
    cin >> n;
    if (n < 0)
    {
        x = 1 / x;
        n = -n;
    }
    int answer = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            answer = answer * x;
        }
        x = x * x;
        n= n / 2 ; 
    }
    cout<<answer ; 
}
// time complixity is O(logn) ; 