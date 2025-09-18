// this approach is called brute approach 
#include<iostream>
using namespace std; 
int main (){
    int n = 9 ; 
    int arr[n] = { 1, 8, 6, 2, 5, 4, 8, 3, 7};
    int max_area = 0 ; 
    for ( int i = 0 ; i< n ; i++){
        for ( int j = i+1 ; j< n ; j++){
              int height = min(arr[i] , arr[j]) ; 
              int width = j -i ; 
              int area = height * width ; 
              max_area = max( max_area , area) ;  

        }
    }

    cout<<max_area; 
}