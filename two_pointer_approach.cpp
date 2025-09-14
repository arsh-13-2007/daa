// we use two pointer approach when use deals with 2 value at same time 


// very very important two pointer approach 
// in this main motive is to select which pointer move first 
// in every single step we check both pointer and choice any of one  
#include <iostream>
#include <algorithm> // for min and max
using namespace std;

int main() {
    int n = 9;
    int arr[n] = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    int left = 0, right = n - 1;
    int max_area = 0;

    while (left < right) {
        int height = min(arr[left], arr[right]);   
        int width = right - left;                
        int area = height * width;               
        max_area = max(max_area, area);          
        if (arr[left] < arr[right]) {
            left++;
        } else {
            right--;
        }
    }
    cout << "Maximum area = " << max_area << endl;
    return 0;
}
