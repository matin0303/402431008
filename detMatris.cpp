#include <iostream>
using namespace std;
double Determinan(double matrix[3][3]) {
    double det = 0;

    det =((matrix[0][0] * (matrix[1][1] * matrix[2][2]) + (matrix[0][1] * matrix[1][2])
        * matrix[2][0]) + (matrix[0][2] * matrix[1][0] * matrix[2][1])) - (( matrix[0][2]
        * matrix[1][1] * matrix[2][0]) + (matrix[0][0] * matrix[1][2] * matrix[2][1])+(matrix[0][1] * matrix[1][0] * matrix[2][2]));
   
    return det;
}
int main() {
    double matrix[3][3];
    cout << "9 ta deraye matrix ro vared konid:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix[i][j];
        }
    }
    double determinan = Determinan(matrix);
    cout << "Determinan matrix shoma: " << determinan << endl;

    return 0;
}
