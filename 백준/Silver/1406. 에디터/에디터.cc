#include <iostream>
#include <string>

using namespace std;

const int MX = 1000005;
char dat[MX];
int pre[MX];
int nxt[MX];
int unused = 1;

void insert (int addr, char chr) {
    dat[unused] = chr;
    pre[unused] = addr;
    // 처음에 넣을때는 지금 내가 마지막이면 -1을 가리키는게 맞음.
    nxt[unused] = nxt[addr];
    // nxt[addr]은 지금 추가하려는 것의 다음의 dat의 주소
    if (nxt[addr] != -1) pre[nxt[addr]] = unused;
    // 전에꺼 다음을 가리킴 cursor
    nxt[addr] = unused;
    unused++;
}

void erase( int addr ) {
    nxt[pre[addr]] = nxt[addr];
    if (nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
}

void traverse() {
    int cur = nxt[0];
    while (cur != -1) {
        cout << dat[cur];
        cur = nxt[cur];
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    fill(pre,pre+MX, -1);
    fill(nxt,nxt+MX, -1);

    string str;
    int N;
    int cursor = 0;
    cin >> str >> N;

    for (char c : str) {
        insert(cursor, c);
        cursor++;
    }
    
    while (N--) {
        char op;
        cin >> op;
        if (op == 'L') {
            if (pre[cursor] != -1) cursor = pre[cursor];
        }
        else if (op == 'D') {
            if (nxt[cursor] != -1) cursor = nxt[cursor];
        }
        else if (op == 'B') {
            if (pre[cursor] != -1) {
                erase(cursor);
                cursor = pre[cursor];
            }
        }
        else {
            char x;
            cin >> x;
            insert(cursor, x);
            cursor = nxt[cursor];
        }
    }

    traverse();
}