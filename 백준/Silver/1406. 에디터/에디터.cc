#include <iostream>
#include <string>
#include <list>

using namespace std;

int main(void) {
    string str;
    int N;
    list <char> memo;
    cin >> str >> N;
    for (char c: str) memo.push_back(c);

    // list<char> 를 순회할수있는 iterator 타입의 cur 변수를 하나 만든다.
    // 초기에는 end()를 가리킴.

    list<char> :: iterator cur = memo.end();

    while (N--) {
        char op;

        cin >> op;

        if (op == 'L') {
            if (cur != memo.begin()) cur--;
        }
        else if (op == 'D') {
            if ( cur != memo.end()) cur++;
        }
        else if (op == 'B') {
            if (cur != memo.begin()) {
                cur--;
                // 지운다음 위치 반환 erase
                cur = memo.erase(cur);
            }
        }
        else {
            char x;
            cin >> x;
            memo.insert(cur,x);
        }
    }

    for (char c : memo) cout << c;
}