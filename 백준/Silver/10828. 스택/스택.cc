#include <iostream>
#include <stack>
#include <string>


using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    stack<int> v;
    cin >> N;

    while (N--) {
        string cmp;
        cin >> cmp;

        if (cmp == "push") {
            int x;
            cin >> x;
            v.push(x);
        }

        else if (cmp == "pop") {
            if (v.empty()) cout << "-1\n";
            else {
                cout << v.top() << "\n";
                v.pop();
            }
        }
        else if (cmp == "size") {
            cout << v.size() << "\n";
        }

        else if (cmp == "empty") {
            if (v.empty()) {
                cout << "1\n";
            } else {
                cout <<"0\n";
            }
        }

        else {

            if (v.empty()) cout << "-1\n";
            else cout << v.top() << "\n";
        }

    }

    return 0;
}