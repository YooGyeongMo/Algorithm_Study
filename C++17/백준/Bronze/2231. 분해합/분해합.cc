#include <iostream>
#include <string>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;

    cin >> str;

    int digit = stoi(str);
    int ans = 0;

    for (int i = 1; i <= digit; i++) {
        string compare = to_string(i);
        int result = 0;
        for (int j = 0; j < compare.size(); j++) {
                result += compare[j] - '0';
        }
        result += i;

        if ( digit == result) {
            ans = i;
            break;
        }
    }

    cout << ans;
}