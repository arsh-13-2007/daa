// question number :-  121  ( best time to buy and sell stock)

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of values:";
    cin >> n;
    int price[n];
    cout << "enter prices in array:";
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }
    int max_profit = 0 ; 
    int best_buy  = price[0]; 

    for ( int i = 1 ; i<n ; i++ ){
        if ( price[i] > best_buy){
            max_profit = max(max_profit , price[i] - best_buy) ; 
            
        }
        best_buy = min( best_buy , price[i]) ; 
    }
    cout<<"max_profit is:" ; 
    cout<<max_profit; 
}