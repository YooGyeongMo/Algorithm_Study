#include <iostream>
#include <deque>

using namespace std;

int moveLeft(deque<int> dq, int a) {
    int left = 0;
    while (dq.front() != a) {
        dq.push_back(dq.front());
        dq.pop_front();
        left++;
    }

    return left;
}

int moveRight(deque<int> dq, int a) {
    int right = 0;
    while (dq.front() != a) {
        dq.push_front(dq.back());
        dq.pop_back();
        right++;
    }

    return right;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    int cnt = 0;
    deque<int> dq;

    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        dq.push_back(i);
    }

    while (M--) {
        int x;
        cin >> x;
        int left = moveLeft(dq, x);
        int right = moveRight(dq, x);

        if (left < right) {
            while (dq.front() != x) {
                dq.push_back(dq.front());
                dq.pop_front();
                cnt++;
            }
            dq.pop_front();
        }
        else {
            while (dq.front() != x) {
                dq.push_front(dq.back());
                dq.pop_back();
                cnt++;
            }
            dq.pop_front();
        }
    }

    cout << cnt;
}
