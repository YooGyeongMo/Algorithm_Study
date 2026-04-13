#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, L;
    deque <pair<int,int>> dq;

    cin >> N >> L;

    for (int i = 0; i<N; i++) {
        int x;
        cin >> x;

        // 최소값을 front()에 두고 최소값 후보지 그보다 큰값을 팝하고 푸시한다.
        while (!dq.empty() && dq.back().second >= x) {
            dq.pop_back();
        }
        dq.push_back({i,x});

        if (dq.front().first <= i-L) {
            dq.pop_front();
        }

        cout << dq.front().second << " ";
    }

}
