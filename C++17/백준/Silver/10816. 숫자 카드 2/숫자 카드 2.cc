#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector <int> v(20000001,0);
    const int ADD = 10000000;

    int N,M;
    cin >> N;

    for (int i = 0; i<N; i++) {
        int idx = 0;
        cin >> idx;
        v[idx+ADD]++;
    }

    cin >> M;

    for (int i = 0; i<M; i++) {
        int idx = 0;
        cin >> idx;
        cout << v[idx+ADD] << " ";
    }

    return 0;
}