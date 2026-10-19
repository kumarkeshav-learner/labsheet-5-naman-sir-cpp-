#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) return i;
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int result = linearSearch(arr, 5, 8);
    
    if(result != -1) cout << "Element found at index " << result << endl;
    else cout << "Element not found." << endl;
    return 0;
}