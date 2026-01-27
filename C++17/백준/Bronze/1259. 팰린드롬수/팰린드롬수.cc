#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;

    while (1) {
        cin >> str;
        bool isCheck = true;
        if (str == "0") break;
        for (int i = 0; i<str.size()/2; i++) {
            if (str[i] == str[str.size()-i-1]) {
                isCheck = true;
            }
            else {
                isCheck = false;
                break;
            }
        }
        if (isCheck) cout <<"yes\n";
        else cout << "no\n";
    }

    return 0;
}