#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int OFFSET = 1000000;
    const int SIZE = 2000001;

    bool exist[SIZE] = {false};

    int N = 0;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        exist[x + OFFSET] = true;
    }

    for (int i = 0; i < SIZE; i++) {
        if (exist[i]) {
            cout << i - OFFSET << '\n';
        }
    }
    
    return 0;
}