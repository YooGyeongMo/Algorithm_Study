#include <iostream>
#include <deque>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    deque<int> queue = {};

    int N, K;

    cin >> N >> K;

    for (int i = 1; i<=N; i++) {
        queue.push_back(i);
    }
    int idx = 0;

    cout << '<';

    while (!queue.empty()) {
        idx = (idx + K - 1) % queue.size();

        cout << queue[idx];
        queue.erase(queue.begin()+idx);

        if (!queue.empty()) {
            cout << ", ";
        }
    }
    cout << '>';
}