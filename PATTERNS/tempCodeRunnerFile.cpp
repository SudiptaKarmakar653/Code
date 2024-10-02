#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of Rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j || i - j == 4 || i - j == -4 || i == 2 * j || j == 2 * i) {
                cout << "*" << " ";
            } else {
                cout << "  "; // Two spaces to maintain the grid structure
            }
        }
        cout << endl;
    }

    return 0;
}
