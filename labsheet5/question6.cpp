#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int target = 15;
    bool found = false;
    int size = sizeof(arr)/sizeof(arr[0]);
    
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            cout << "Element found at index " << i << endl;
            found = true;
            break;
        }
    }
    if(!found) cout << "Element not found." << endl;
    return 0;
}