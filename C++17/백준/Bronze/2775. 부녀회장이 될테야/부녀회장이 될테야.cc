#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T,k,n;
    cin >> T ;

    int arr[15][15] = {0};

    for (int i = 1; i < 15; i++) {
        arr[0][i] = i;
    }

    for (int i = 1; i<15; i++) {
        for (int j = 1; j<15; j++) {
            arr[i][j] = arr[i-1][j] + arr[i][j-1];
        }
    }

    for (int i = 0; i<T; i++) {
        cin >> k >> n;
        cout << arr[k][n] << "\n";
    }

    return 0;
}