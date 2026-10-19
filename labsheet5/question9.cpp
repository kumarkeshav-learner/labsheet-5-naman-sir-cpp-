#include <iostream>
using namespace std;

int main() {
    int mat1[2][2] = {{5, 6}, {7, 8}};
    int mat2[2][2] = {{1, 2}, {3, 4}};
    int diff[2][2];
    
    cout << "Difference Matrix:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            diff[i][j] = mat1[i][j] - mat2[i][j];
            cout << diff[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}