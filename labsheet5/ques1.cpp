#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    int arr[size];
    
    
    for(int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    
    cout << "Array elements are: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}