#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //nCk

    int N,K;
    int arr[11][11] = {0};
    cin >> N >> K;

    for (int i = 0; i<11; i++) {
        arr[i][i] = 1;
        arr[i][0] = 1;
    }

    for (int i = 2; i<=N; i++) {
        for (int j = 1; j<=N; j++ ) {
            arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }
    }

    cout << arr[N][K];

    return 0;
}