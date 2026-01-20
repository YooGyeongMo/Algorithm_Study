#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v(26,0);

    string str;

    cin >> str;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= 'a') {
            str[i] -= 32;
        }
        v[str[i]-'A']++;
    }

    int mx = 0;
    int mxIdx = 0;

    for (int i = 0; i<v.size(); i++ ) {
        if (mx<v[i]) {
            mx = v[i];
            mxIdx = i;
        }
    }
    int count = 0;
    for (int i = 0; i<v.size(); i++ ) {
        if (mx == v[i]) {
            count++;
        }
    }

    if (count > 1) {
        cout << "?";
    } else {
        cout << (char)(mxIdx+'A');
    }

    return 0;
}