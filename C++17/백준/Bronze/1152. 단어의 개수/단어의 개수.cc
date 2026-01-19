#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string str = "";

    int count = 0;
    bool check = false;
    getline(cin, str,'\n');

    for (int i = 0; i<str.size(); i++) {
        if (str[i] != ' ' && !check) {
            count++;
            check = true;
        }
        if (str[i] == ' ' ) {
            check = false;
        }
    }

    cout << count ;


    return 0;
}