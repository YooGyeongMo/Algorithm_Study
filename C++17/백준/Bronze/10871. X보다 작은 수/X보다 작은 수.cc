#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, X;
    int arr[10000];
    cin >> N >> X;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++ ) {
        if (X > arr[i]) {
            cout << arr[i] << " ";
        }
    }
}