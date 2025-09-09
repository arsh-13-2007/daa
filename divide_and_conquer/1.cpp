// time complexity is O(nlogn) ;
#include <iostream>
#include<climits>
using namespace std;
int crossing_sum(int arr[] , int lower , int mid , int upper ){
    int sum = 0 ; 
    int left_sum  = INT_MIN , right_sum = INT_MIN ; 
    for ( int i = mid +1 ; i<=  upper ; i++ ){
        sum = sum + arr[i] ; 
        right_sum = max( right_sum , sum ) ; 
    }
    sum = 0 ; 
    for ( int i = mid ; i >=lower ; i-- ){
       sum = sum + arr[i] ; 
       left_sum = max( left_sum , sum ) ; 
    }
    return left_sum + right_sum ; 

}
int maxsubarraysum ( int arr[] , int lower , int upper ){
    if ( lower == upper){
        return arr[lower] ; 
    }
    int mid = (lower + upper ) / 2 ; 
    int lss = maxsubarraysum( arr , lower , mid  );
    int rss= maxsubarraysum( arr , mid +1  , upper  );
    int css = crossing_sum( arr , lower , mid , upper ) ; 
    return max(max( lss , rss) , css) ; 
}
int main()
{
    int n;
    n = 8;
    int arr[n];
    cout << "enter elements in array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int lower = 0, upper = n - 1;
    int x =  maxsubarraysum( arr , lower , upper ); 
    cout<<"maximum subarray sum:"<<x<<endl ; 
}