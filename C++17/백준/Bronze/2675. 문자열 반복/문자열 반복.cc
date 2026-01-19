#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCase;
    cin >> testCase;

    for (int i = 0; i<testCase; i++) {
        int m = 0;
        string str;
        string str2 = "";
        cin >> m;
        cin >> str;
        for (int j =0; j<str.size(); j++) {
            for (int k = 0; k<m; k++) {
                str2 += str[j];
            }
        }
        cout << str2 << "\n";
    }

    return 0;
}