#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[] = {"Zack", "Alice", "Bob", "Charlie"};
    int size = sizeof(names)/sizeof(names[0]);
    
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(names[j] > names[j+1]) {
                string temp = names[j];
                names[j] = names[j+1];
                names[j+1] = temp;
            }
        }
    }
    
    cout << "Sorted Names: ";
    for(int i = 0; i < size; i++) cout << names[i] << " ";
    return 0;
}