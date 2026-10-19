#include <iostream>
using namespace std;


int findMaxSorted(int arr[], int size) {
    int left = 0, right = size - 1;
  
    return arr[right]; 
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    cout << "The largest element is: " << findMaxSorted(arr, size) << endl;
    return 0;
}