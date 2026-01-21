#include <iostream>
#include <string>
#include <array>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    int count = 0;

    cin >> N;

    for (int i = 0; i<N;i++) {
        string str;
        cin >> str;

        array <bool,26> isUsed {false};
        bool ok = true;

        isUsed[str[0]-'a'] = true;

        for (int j = 1; j<str.size();j++) {
            if (str[j] != str[j-1]) {
                if (isUsed[str[j]-'a']) {
                    ok = false;
                    break;
                }
                isUsed[str[j]-'a'] = true;
            }
        }
        if (ok) {
            count++;
        }
    }

    cout << count;


    return 0;
}