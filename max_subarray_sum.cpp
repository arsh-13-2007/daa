#include<iostream>
using namespace std; 
int main (){
    int n = 8 ; 
    int arr[n] ; 
    cout<<"enter elements:\n" ; 
    for ( int i = 0 ; i< n; i++){
        cin>>arr[i] ; 
    }

    // time complexity is O(n^2) 
    // method name brute force 

    // int sum = 0 , max_sum = 0 ;
    // for ( int i = 0 ; i < n ; i++){
    //     sum = 0 ; 
    //     for ( int j = i ; j < n ; j++){
    //          sum = sum + arr[j] ; 
    //          max_sum = max(max_sum , sum ) ; 
    //     }
    // }
    // cout<<"\nmax. subarray sum:"<<max_sum; 
    // time complexity is O(n)
    // method name kadane algorithm 
   int current_sum = 0 , max_sum = 0 ;  
    for ( int i= 0 ; i < n ; i ++){
        current_sum += arr[i] ; 
        max_sum = max( current_sum , max_sum);
         if ( current_sum < 0 ){
            current_sum =  0  ; 
         }
    }

    // drawback of kadane algo. is if full array si negative 
    cout<<"\nmax. subarray sum:"<<max_sum;
}