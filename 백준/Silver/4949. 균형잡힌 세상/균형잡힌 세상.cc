#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        string str;
        stack<char> s;
        bool isVaild = true;

        getline(cin, str);

        if (str == ".") return 0;

        for (char c : str) {
            if (c == '(' || c == '[') s.push(c);

            else if (c == ')' ) {
                if ( s.empty() || s.top() != '(') {
                    isVaild = false;
                    break;
                }
                s.pop();
            }

            else if (c == ']') {
                if ( s.empty() || s.top() != '[') {
                    isVaild = false;
                    break;
                }
                s.pop();
            }
        }

        if (s.empty() && isVaild) cout << "yes\n";
        else cout << "no\n";
    }
}