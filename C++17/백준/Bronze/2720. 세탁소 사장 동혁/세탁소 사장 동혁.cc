#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;

    for (int i=0; i<T; i++) {
        int money;
        cin >> money;
        int arr[4] = {0};

        arr[0] = money/25;
        money %= 25;

        arr[1] = money/10;
        money %= 10;

        arr[2] = money/5;
        money %= 5;

        arr[3] = money/1;
        money %= 1;

        for (int j = 0; j<4; j++) {
            cout << arr[j] << " " ;
        }
        cout << "\n";
    }
}