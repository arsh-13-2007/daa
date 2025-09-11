#include<stdio.h>
int binary_search( int n , int *arr, int num ){
    int lower = 0 ; 
    int higher = n - 1 ; 
    while ( lower <= higher){
        int mid = ( lower + higher ) / 2 ; 
        if (  arr[mid]== num){
            return mid; 
        }
        else if ( arr[mid] < num ){
            lower = mid + 1 ; 
        }
        else {    
            higher = mid - 1 ; 
        }
    }
    return -1 ;  
}
int main (){
    int n, num ; 
    printf("enter number of elements in array :");
    scanf("%d",&n); 
    printf("enter number you want ot search : "); 
    scanf("%d",&num); 
    int arr[n];
    printf("enter sorted elements in array : ");  
    for ( int i = 0 ; i <n ; i++){
        scanf("%d",&arr[i]);
    }
    int x = binary_search(n , arr , num );
    if ( x == -1 ){
        printf("element is not found");
    } 
    else {
        printf("element is found at %d index", x );
    }

}