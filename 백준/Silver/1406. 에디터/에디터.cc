#include <iostream>
#include <string>

using namespace std;

const int MX = 1000005;
char dat[MX];
int pre[MX], nxt[MX];
int unused = 1;

void insert(int addr, char chr) {
    dat[unused] = chr;
    pre[unused] = addr;
    nxt[unused] = nxt[addr];

    if (nxt[addr] != -1) pre[nxt[addr]] = unused;
    nxt[addr] = unused;
    unused++;
}

void erase(int addr) {
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

    fill(pre,pre+MX,-1);
    fill(nxt,nxt+MX, -1);

    string str;
    int N;
    int cursor = 0;

    cin >> str >> N;

    for (char c: str) {
        insert(cursor,c);
        cursor++;
    }

    while (N--) {
        char cmp;
        cin >> cmp;

        if ( cmp == 'L') {
            if (pre[cursor] != -1) cursor = pre[cursor];
        }
        else if (cmp == 'D') {
            if (nxt[cursor] != -1 ) cursor = nxt[cursor];
        }
        else if (cmp == 'B') {
            if (pre[cursor] != -1) {
                erase(cursor);
                cursor = pre[cursor];
            }
        }
        else {
            char x ;
            cin >> x;
            insert(cursor, x);
            cursor = nxt[cursor];
        }
    }

    traverse();

}
