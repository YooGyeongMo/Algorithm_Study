#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    string order;
    vector <int> v;

    cin >> N;

    while (N--) {
        string cmd;
        cin >> cmd;

        if (cmd=="push") {
            int x;
            cin >> x;
            v.push_back(x);
        }
        else if (cmd=="pop") {
            if (v.empty()) {
                cout << -1 << "\n";
            }
            else {
                int x = v.back();
                v.pop_back();
                cout << x << "\n";
            }
        }
        else if (cmd == "size") {
            int x = v.size();
            cout << x << "\n";
        }

        else if (cmd == "empty") {
            if (v.empty()) {
                cout << 1 << "\n";
            }
            else {
                cout << 0 << "\n";
            }
        }

        else {
            if (v.empty()) {
                cout << -1 << "\n";
            }
            else {
                cout << v.back() << "\n";
            }
        }
    }

    return 0;
}