#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    while (N--) {
        string a, b;
        cin >> a >> b;

        if (a.length() != b.length()) {
            cout << "Impossible\n";
            continue;
        }

        int cnt[26] = {0};

        for (char c : a) {
            cnt[c - 'a']++;
        }

        for (char c : b) {
            cnt[c - 'a']--;
        }

        bool possible = true;
        for (int i = 0; i < 26; i++) {
            if (cnt[i] != 0) {
                possible = false;
                break;
            }
        }

        if (possible) cout << "Possible\n";
        else cout << "Impossible\n";
    }

    return 0;
}