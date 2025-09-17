#include<iostream> 
using namespace std ; 
int main (){
    int a = 10 ; 
    int  *ptr = &a ; 
    int **ptr1 = & ptr; 
    cout<<a<<endl ;  
    cout<<*ptr<<endl ;  
    cout<<**ptr1<<endl ;  
    cout<<*ptr<<endl ;  
    cout<<ptr<<endl ;  
    cout<<ptr1<<endl ;  
    cout<<&ptr<<endl ;  
    int arr[5] = { 1, 2 ,3 ,4 ,5 };
    cout<<*(arr)<<endl ;  // print 0th index element
    cout<<*(arr+1 )<<endl ; // print 1st index element
    cout<<*(arr+2)<<endl ; // print 2nd index element
    cout<<*(arr+3)<<endl ; // print 3rd index element
}