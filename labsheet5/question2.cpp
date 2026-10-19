#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int sum = 0;
    int size = sizeof(arr)/sizeof(arr[0]);
    
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    cout << "Sum of array elements: " << sum << endl;
    return 0;
}