#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string arr[5] = {"D","C","B","A","E"};

    for (int i = 0 ; i<3; i++) {
        int x, sum = 0;
        for (int j = 0; j<4;j++) {
            cin >> x;
            sum += x;
        }

        cout << arr[sum] << "\n";
    }

    return 0;
}