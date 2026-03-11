#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int y = 0;
    int m = 0;

    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;

        y += (t / 30 + 1) * 10;
        m += (t / 60 + 1) * 15;
    }

    if (y < m) {
        cout << "Y " << y;
    } else if (m < y) {
        cout << "M " << m;
    } else {
        cout << "Y M " << y;
    }

    return 0;
}