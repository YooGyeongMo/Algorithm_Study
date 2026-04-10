#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    while (N--) {
        string str;
        stack<char> s;
        bool isVaild = true;
        cin >> str;

        for (char c: str) {
            if (c=='(') s.push(c);

            else if ( c == ')') {
                if (s.empty() || s.top()==')') {
                    isVaild = false;
                }
                else s.pop();
            }
        }

        if (s.empty() && isVaild) cout << "YES\n";
        else cout << "NO\n";
    }
}