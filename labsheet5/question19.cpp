#include <iostream>
using namespace std;

int binarySearchFloat(float arr[], int size, float target) {
    int left = 0, right = size - 1;
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(arr[mid] == target) return mid;
        if(arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    float arr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int result = binarySearchFloat(arr, 5, 4.4);
    
    if(result != -1) cout << "Found at index " << result << endl;
    else cout << "Not found." << endl;
    return 0;
}