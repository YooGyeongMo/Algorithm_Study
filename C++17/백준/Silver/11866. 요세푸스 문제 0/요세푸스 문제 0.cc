#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N,K;

    cin >> N >> K;

    queue <int> q;

    for (int i = 1; i <= N; i++) {
        q.push(i);
    }

    cout << "<";
    for (int i = 0; i<N; i++) {
        for (int j = 0; j<K-1; j++) {
            q.push(q.front());
            q.pop();
        }
        cout << q.front();
        q.pop();

        if (i != N-1) {
            cout <<", ";
        }
    }
    cout << ">";

    return 0;
}