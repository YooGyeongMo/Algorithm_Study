#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v;
    int N; cin >> N;

    for (int i = 0; i < N; i++) {
        string cmd;
        int x = 0;
        cin >> cmd;
        if (cmd != "all" && cmd != "empty") cin >> x;

        if (cmd == "add") {
            if (find(v.begin(), v.end(), x) == v.end()) v.push_back(x);
        } else if (cmd == "remove") {
            v.erase(remove(v.begin(), v.end(), x), v.end());
        } else if (cmd == "check") {
            cout << (find(v.begin(), v.end(), x) != v.end()) << '\n';
        } else if (cmd == "toggle") {
            auto it = find(v.begin(), v.end(), x);
            if (it != v.end()) v.erase(it);
            else v.push_back(x);
        } else if (cmd == "all") {
            v.clear();
            for (int j = 1; j <= 20; j++) v.push_back(j);
        } else if (cmd == "empty") {
            v.clear();
        }
    }
}