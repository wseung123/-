#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    while (1) {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0)
            break;

        if (a > 0 && b > 0 && c > 0 && a + b > c && b + c > a && c + a > b) {
            if (a == b && b == c)
                cout << "Equilateral\n";
            else if (a == b || b == c || c == a)
                cout << "Isosceles\n";
            else
                cout << "Scalene\n";
        } else {
            cout << "Invalid\n";
        }
    }
    return 0;
}