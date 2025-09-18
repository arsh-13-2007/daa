// product of an array except itself 
// using brute force 
// time complexity come  O(n^2) 

#include<iostream>
using namespace std ; 
int main (){
    int n  = 4 ; 
    int arr[4] ={1,2, 3, 4}  ; 
    
    int brr[n] ;  
    for ( int i = 0  ; i< n ; i++){
        int mul = 1 ; 
        for ( int j = 0;j < n ; j++){
            if ( i == j ){
                continue;
            }
            else {
                mul = mul * arr[j] ; 
            }
        }
        brr[i] = mul ; 
    }
    for ( int i = 0 ; i  < n ; i++){
        cout<<brr[i]<<"  " ; 
    }
}