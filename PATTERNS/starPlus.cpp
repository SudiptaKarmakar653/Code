#include<iostream>
using namespace std;

int main() {
    int m;
    cout << "Enter number of Rows: ";
    cin >> m;

    int mid = m / 2 + 1;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= m; j++) {
            if (i == mid || j == mid) {
                cout << "*" << " ";
            } else {
                cout << "  "; // Two spaces to maintain the grid structure
            }
        }
        cout << endl;
    }

    return 0;
}
