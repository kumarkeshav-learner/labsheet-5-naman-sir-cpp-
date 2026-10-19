#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 2, 4, 5};
    int target = 2, count = 0;
    int size = sizeof(arr)/sizeof(arr[0]);
    
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) count++;
    }
    cout << "The element " << target << " occurs " << count << " times." << endl;
    return 0;
}