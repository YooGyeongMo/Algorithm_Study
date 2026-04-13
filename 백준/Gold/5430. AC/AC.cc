#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;

    cin >> T;

    while (T--) {
        int N, rev = 0;
        deque<int> dq;
        string op;
        string arr;

        cin >> op >> N >> arr;

        int num = 0;
        bool isNum = false;

        for (char c: arr) {
            if (isdigit(c)) {
                num = num * 10 + (c - '0');
                isNum = true;
            } else {
                if (isNum) {
                    dq.push_back(num);
                    num = 0;
                    isNum = false;
                }
            }
        }

        bool error = false;

        for (char c: op) {
            if (c == 'R') {
                rev = 1 - rev;
            } else {
                if (dq.empty()) {
                    cout << "error\n";
                    error = true;
                    break;
                }

                if (!rev) dq.pop_front();
                else dq.pop_back();
            }
        }
        if (error) {
            continue;
        }

            cout << "[";
            size_t size = dq.size();

            for (size_t i = 0; i < size; i++) {
                if (!rev) {
                    cout << dq.front();
                    dq.pop_front();
                } else {
                    cout << dq.back();
                    dq.pop_back();
                }

                if (i != size - 1) cout << ",";
            }
            cout << "]\n";
    }
}
