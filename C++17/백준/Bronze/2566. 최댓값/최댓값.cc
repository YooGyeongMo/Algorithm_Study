#include <iostream>


using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[10][10];

    for (int i = 1; i<10; i++) {
        for (int j = 1; j<10; j++) {
            cin >> arr[i][j];
        }
    }
    int mx = 0;
    int N = 0;
    int M = 0;
    for (int i = 1; i<10; i++) {
        for (int j = 1; j<10; j++) {
            if (mx <= arr[i][j]) {
                mx = arr[i][j];
                N = i;
                M = j;
            }
        }
    }

    cout << mx << "\n" << N << " " << M;
}