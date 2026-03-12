#include <iostream>

using namespace std;

int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[10] = { }, mx = 0, maxIdx = 0;

    for (int i = 1; i<10; i++) {
        cin >> arr[i];
        if (mx < arr[i]) {
            mx = arr[i];
            maxIdx = i;
        }
    }

    cout << mx << "\n";
    cout << maxIdx << "\n";
}