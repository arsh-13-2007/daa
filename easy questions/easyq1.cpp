//check palidrome 
#include<iostream>
using namespace std ; 
int main()
{
  int n = -121;
  if ( n < 0 ){
    cout<<"number is not palidrome" ; 
    return 0 ; 
  }
  int a =n ; 
  int num = 0 ; 
  int reminder= 0 ; 
  while ( n !=0 ){
    reminder = n % (10) ; 
    num = num*10 + reminder ; 
    n = n/ 10  ; 
  }
  if ( num == a  ){
    cout<<"number is palidrome"<<endl;
  }

  else {
    cout<<"number is not palidrome"<<endl ; 
  }

}