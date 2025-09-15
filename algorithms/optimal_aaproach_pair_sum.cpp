// question or algorithm name is pair sum
// given sorted array  ;
// time complexity is O(n)
// using two pointer approach

#include <iostream>
using namespace std;
int main()
{
    int target_sum;
    cout << "enter target_sum:";
    cin >> target_sum;
    int n = 4;
    int arr[n] = {2, 7, 11, 15};
    int lower = 0, upper = n - 1;
    while (lower < upper)
    {
        if (arr[lower] + arr[upper] == target_sum  ){
            cout<<"target_sum is found successfully:\n" ; 
            cout<<"index are:"<<lower<<" "<<upper ; 
           return 0 ;  
        }
        else if  ( (arr[lower] + arr[upper])> target_sum) {
            upper-- ; 
        }
        else if ((arr[lower] + arr[upper])< target_sum ){
            lower ++ ; 
        }  
    }

            cout<<"no match found"<<endl; 

    
}