#include <iostream>
#include <vector>

using namespace std;

int pre[5001];
int nxt[5001];

vector <int> v;
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K, len = 0;

    cin >> N >> K;

    for (int i = 1; i<=N; i++) {
        pre[i] = (i==1) ? N : i-1;
        nxt[i] = (i==N) ? 1 : i+1;
        len++;
    }

    int idx = 1;

    for (int cur = 1; len != 0; cur = nxt[cur]) {
        if (idx == K) {
            pre[nxt[cur]] = pre[cur];
            nxt[pre[cur]] = nxt[cur];
            v.push_back(cur);
            idx = 1;
            len--;
        } else idx++;
    }



    cout << '<';

    for (int i = 0 ; i<v.size(); i++) {
        cout << v[i];
        if (i != v.size() - 1) cout <<", ";
    }

    cout << '>';
}