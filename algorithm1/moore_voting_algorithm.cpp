// moore voting algorithm 
// time complexity is O(n )
// optimal approach is this to find majority element 

#include <iostream>
using namespace std;
int main()
{
    int answer = 0  , freq = 0 ; 
    int n = 5;
    int arr[5] = {1, 2, 2, 1, 1};
    for ( int i = 0 ; i< n ; i++){
        if ( freq == 0 ){
            answer = arr[i] ; 
        }
        if (answer == arr[i]){
            freq += 1; 
        }
        else {
            freq-- ; 
        }
    }
    cout<<"majority element is:"<<answer;   
}