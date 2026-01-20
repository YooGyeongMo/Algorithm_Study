#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;

    cin >> str;
    int check = false;
    for (int i = 0; i<=str.size()/2; i++) {
        if (str[i] == str[str.size()-i-1]) {
            if (!check) {
                check = true;
            }
        } else {
            check = false;
            break;
        }
    }

    if (check) {
        cout << "1";
    }
    else {
        cout << "0";
    }

    return 0;
}