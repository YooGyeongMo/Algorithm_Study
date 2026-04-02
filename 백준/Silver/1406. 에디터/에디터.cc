#include <iostream>
#include <string>
#include <list>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    int N;
    list<char> str2;
    cin >> str >> N;

    for (char c : str) {
        str2.push_back(c);
    }
    list<char> :: iterator cursor = str2.end();

    for (int i = 0; i<N; i++) {
        char cmp;
        cin >> cmp;
        if (cmp == 'P') {
            char x;
            cin >> x;
            str2.insert(cursor, x);
        }
        else if (cmp == 'L') {
            if (cursor != str2.begin()) {
                cursor--;
            }
        }
        else if ( cmp == 'D') {
            if (cursor != str2.end()) {
                cursor++;
            }
        }
        else {
            if (cursor != str2.begin()) {
                cursor--;
                cursor = str2.erase(cursor);
            }
        }
    }

    for (char c: str2) {
        cout << c;
    }

}
