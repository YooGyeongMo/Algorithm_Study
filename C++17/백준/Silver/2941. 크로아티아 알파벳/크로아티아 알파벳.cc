#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;

    cin >> str;

    int count = 0;

    for (int i = 0; i<str.size(); i++) {
        if ( i+2 < str.size() && str[i] == 'd' && str[i+1] == 'z' && str[i+2] == '=' ) {
            count++;
            i += 2;
        }
        else if (i+1 < str.size()) {
            string two = str.substr(i,2);
            if ( two == "c=" ||
                two == "c-" ||
                two == "d-" ||
                two == "lj" ||
                two == "nj" ||
                two == "s=" ||
                two == "z=") {
                count++;
                i += 1;
            }
            else {
                count++;
            }
        }
        else {
            count++;
        }
    }

    cout << count;
    return 0;
}