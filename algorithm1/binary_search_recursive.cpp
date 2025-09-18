#include<iostream>
using namespace std ;
int binary_search( int arr[], int num , int lower , int upper  ){
    if ( lower <=  upper){
        int mid = ( lower + upper ) / 2  ; 
        if ( arr[mid] == num ){
            return  mid ;
        }
        else  if ( arr[mid] > num ){
            upper = mid -1 ;
            return binary_search( arr, num , lower , upper );
        }
        else if ( arr[mid] < num ){
            lower = mid +1  ; 
            return binary_search( arr , num , lower , upper ) ; 
        }
    }
    return -1 ; 

} 
int main (){
    int n = 8  ; 
    int arr[n] = { 1, 10,12,25,35,44,69,99 };
    int  num  , lower = 0 , upper = n-1 ;
    cout<<"enter number you want to search:";
    cin>> num ; 
    int x = binary_search( arr , num  , lower , upper ) ;
    if ( x== -1 ){
        cout<<"searched element is not found in array:"<<endl ; 
    }
    else 
    {
        cout<<"congratulation element is found at index "<<x+1<<"th"<<endl ; 
    }
}