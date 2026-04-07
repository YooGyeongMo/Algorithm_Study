#include <iostream>
#include <deque>
#include <string>

using namespace std;

deque<int> dq;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;

    cin >> N;

    while (N--) {
        string cmp;
        cin >> cmp;

        if ( cmp == "push_front") {
            int x ;
            cin >> x;
            dq.push_front(x);
        }

        else if ( cmp == "push_back") {
            int x;
            cin >> x;
            dq.push_back(x);
        }

        else if (cmp == "pop_front") {
            if (dq.empty()) cout << -1 << "\n";
            else {
                cout << dq.front() << "\n";
                dq.pop_front();
            }
        }

        else if (cmp == "pop_back") {
            if (dq.empty()) cout << -1 << "\n";
            else {
                cout << dq.back() << "\n";
                dq.pop_back();
            }
        }

        else if (cmp == "size") {
            cout << dq.size() << "\n";
        }

        else if (cmp == "empty") {
            if (dq.empty()) {
                cout << 1 << "\n";
            }
            else {
                cout << 0 << "\n";
            }
        }

        else if (cmp == "front") {
            if (dq.empty()) {
                cout << -1 << "\n";
            }
            else {
                cout << dq.front() <<"\n";
            }
        }

        else {
            if (dq.empty()) {
                cout << -1 << "\n";
            }
            else {
                cout << dq.back() << "\n";
            }
        }
    }
}