#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int target = 30;
    bool isPresent = false;
    int size = sizeof(arr)/sizeof(arr[0]);
    
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            isPresent = true;
            break;
        }
    }
    
    if(isPresent) cout << "Number is present in the array." << endl;
    else cout << "Number is not present." << endl;
    return 0;
}