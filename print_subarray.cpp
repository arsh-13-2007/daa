#include<iostream>
using namespace std; 
int main (){
    int arr[5] ; 
    cout<<"enter elements:\n" ; 
    for ( int i = 0 ; i< 5 ; i++){
        cin>>arr[i] ; 
    }
    // print sub possible array 
    for ( int i = 0 ; i< 5 ; i++){
        for ( int j = i ; j< 5 ; j++){
            for ( int k= i ; k <= j ; k++){
                cout<<arr[k] ; 
            }
            cout<<" ";
        }
        cout<<endl ; 
    } 
}