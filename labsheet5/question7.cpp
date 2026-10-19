#include <iostream>
using namespace std;

int main() {
    int rows = 2, cols = 2;
    int matrix[rows][cols];
    
    cout << "Enter elements for 2x2 matrix:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    
    cout << "Matrix elements:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}