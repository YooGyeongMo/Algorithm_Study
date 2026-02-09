#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    int a[100001];

    for (int i = 1; i<= N; i++) {
        int x;
        cin >> x;
        a[i] = a[i-1] + x;
    }

    for (int i = 1; i<=M; i++) {
        int x, y;
        cin >> x >> y;
        cout << a[y] - a[x-1] <<"\n";
    }

    return 0;
}