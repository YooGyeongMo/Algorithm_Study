#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, X, a[10001];

    cin >> N >> X;

    for (int i = 0; i<N; i++) {
        cin >> a[i];
    }

    for (int i = 0; i<N; i++) {
        if (a[i] < X) {
            cout << a[i] <<' ';
        }
    }


    return 0;
}