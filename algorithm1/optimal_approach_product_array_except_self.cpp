// product of an array except itself 
// using optimal approach 
// time complexity come  O(n)


// we use prefix and suffix techinque to solve this question 

#include<iostream>
using namespace std ; 
int main (){
    int n  = 4 ; 
    int arr[4] ={1,2, 3, 4}  ; 
    
    int prefix[n] ;  
    prefix[0]= 1 ; 
    // first conpute prefix array 
    for ( int i = 1  ; i< n ; i++){
        prefix[i] = arr[i-1]*prefix[i-1] ;
    }
     int suffix[n] ; 
     suffix[n-1 ] = 1 ; 
     for ( int i = n-2 ; i >= 0 ; i--){
          suffix[i] = suffix[i+1 ] * arr[i+1] ; 
     }
     int brr[n] ; 
     for ( int i = 0 ; i< n ; i++){
        brr[i] = prefix[i] * suffix[i] ; 
     }

// final answer product of array except  self 
     for ( int i = 0 ; i<n ; i++){
        cout<<brr[i] <<"  " ; 
     }
}