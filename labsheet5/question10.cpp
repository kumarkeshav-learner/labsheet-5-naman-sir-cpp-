#include <iostream>
using namespace std;

int main() {
    int mat1[2][2] = {{1, 2}, {3, 4}};
    int mat2[2][2] = {{2, 0}, {1, 2}};
    int product[2][2] = {0};
    
    cout << "Product Matrix:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                product[i][j] += mat1[i][k] * mat2[k][j];
            }
            cout << product[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}