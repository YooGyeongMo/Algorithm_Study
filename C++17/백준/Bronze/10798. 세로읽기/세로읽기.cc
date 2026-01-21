#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector <string> str(5);

    for (int i = 0; i<5;i++) {
        cin >> str[i];
    }

    size_t maxLen = 0;

    for (int i = 0; i<5;i++) {
        if (str[i].size() > maxLen) {
            maxLen = str[i].size();
        }
    }

    for (size_t col = 0; col < maxLen; col++) {
        for (int row = 0 ; row < 5; row++) {
            if (col < str[row].size()) {
                cout << str[row][col];
            }
        }
    }
}