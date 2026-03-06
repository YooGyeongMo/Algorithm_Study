#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int sum = 0, x, minValue = 100;
    bool check = false;

    for (int i = 0; i<7;i++) {

        cin >> x;

        if (x & 1) {
            check = true;
            sum += x;
            if (minValue > x) {
                minValue = x;
            }
        }
    }

    if (check) {
        cout << sum << "\n" << minValue;
    }
    else {
        cout << "-1";
    }

    return 0;
}