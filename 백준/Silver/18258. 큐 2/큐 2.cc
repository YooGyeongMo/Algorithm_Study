#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    queue<int> q;

    int N;
    cin >> N;

    while (N--) {
        string cmp;
        cin >> cmp;

        if (cmp == "push") {
            int x;
            cin >> x;

            q.push(x);
        }
        else if (cmp == "front") {
            if (q.empty()) cout << -1 << "\n";
            else cout << q.front() << "\n";
        }
        else if (cmp == "back") {
            if (q.empty()) cout << -1 << "\n";
            else cout << q.back() << "\n";
        }

        else if (cmp =="pop") {
            if (q.empty()) cout << -1 <<"\n";
            else {
                cout << q.front() << "\n";
                q.pop();
            }
        }
        else if (cmp == "size") {
            cout << q.size() << "\n";
        }

        else {
            if (q.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
     }


}