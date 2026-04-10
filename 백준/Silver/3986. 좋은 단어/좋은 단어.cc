#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    int result = 0;
    cin >> N;

    while (N--) {
        string str;
        stack<char> s;
        cin >> str;

        for (char c : str) {
            if (!s.empty() && c == s.top()) {
                s.pop();
                continue;
            }
            s.push(c);
        }

        if (s.empty()) result++;
    }

    cout << result;
}