#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;

    while (!getline(cin, str).eof()) {
        cout << str << "\n";
    }

    return 0;
}