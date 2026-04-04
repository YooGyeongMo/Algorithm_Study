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

    cout << '<';

    while (!queue.empty()) {

        for (int i = 0; i<K-1;i++) {
            queue.push_back(queue.front());
            queue.pop_front();
        }
        cout << queue.front();
        queue.pop_front();

        if (!queue.empty()) {
            cout << ", ";
        }
    }
    cout << '>';
}