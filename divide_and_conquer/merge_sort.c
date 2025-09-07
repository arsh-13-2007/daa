// merge sort work on divide and conquer technique 
#include <stdio.h>
void merge( int * arr , int lower , int mid , int upper ){
    int i = lower , j = mid +1 , k = lower ; 
    int brr[upper + 1] ; 
    while ( i <= mid && j <= upper ){
        if ( arr[i] <= arr[j]){
            brr[k] = arr [i] ; 
            k++ , i++ ; 
        }
        else {
            brr[k] = arr[j] ; 
            k++ , j++ ; 
        }
    }
    if ( i > mid ){
        while ( j <= upper ){
            brr[k] = arr[j] ; 
            j++ ; k++ ; 
        }
    }
    else {
        while ( i <= mid ){
            
            brr[k] = arr[i] ; 
            i++ ; k++ ; 
        }
    }
    for ( int i =lower; i <=upper ; i++){
        arr[i] = brr[i] ; 
        
    }
}
void merge_sort(int *arr ,int lower , int upper ){
    if ( lower < upper){
        int mid = (lower + upper )/ 2 ;
        merge_sort( arr , lower ,mid );
        merge_sort( arr , mid+1 , upper );
        merge( arr , lower ,mid , upper); 
    }
}
void print(int *arr , int n ){
        for ( int i=0 ; i < n ; i++){
        printf("%dth element of array:%d\n", i ,  arr[i]); 
    }
}
int main (){
    int n, num ; 
    printf("enter number of elements in array :");
    scanf("%d",&n);  
    int arr[n];
    printf("enter elements in array : ");  
    for ( int i = 0 ; i <n ; i++){
        scanf("%d",&arr[i]);
    }
    printf("array before sort : \n");
    print(arr, n ); 
    int lower = 0 , upper = n-1 ; 
    merge_sort(arr,lower , upper ); 
    printf("array after  sort :\n ");
    print(arr, n ); 
    

}