#include <iostream>

using namespace std;


int bmm(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    cout << "Enter A: ";
    cin >> num1;
    cout << "Enter B: ";
    cin >> num2;

    int result = bmm(num1, num2);
    cout << "Bmm A,B: " << result << endl;

    return 0;
}
