#include <iostream>
#include <string>
#include <list>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int L;


    cin >> L;

    while (L--) {
        string str;
        list<char> keyLogger;
        list<char>::iterator cursor = keyLogger.begin();

        cin >> str;
        for (char c: str) {
            if (c == '<') {
                if (cursor != keyLogger.begin()) cursor--;
            } else if (c == '>') {
                if (cursor != keyLogger.end()) cursor++;
            } else if (c == '-') {
                if (cursor != keyLogger.begin()) {
                    --cursor;
                    cursor = keyLogger.erase(cursor);
                }
            } else {
                keyLogger.insert(cursor, c);
            }
        }

        for (char c: keyLogger) {
            cout << c;
        }
        cout << "\n";
    }
}