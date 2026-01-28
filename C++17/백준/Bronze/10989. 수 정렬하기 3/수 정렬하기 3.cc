#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt[10001] = {0};

    int N, count;

    cin >> N;

    for (int i = 0; i<N; i++) {
        cin >> count;
        cnt[count]++;
    }

    for (int i = 1; i<10001; i++) {
        for (int j = 0; j < cnt[i]; j++) {
            cout << i << "\n";
        }
    }

    return 0;
}