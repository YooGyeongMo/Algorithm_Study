#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<int> v(N, 0);

    for (int i = 0; i<N; i++) {
        v[i] = i+1;
    }

    for (int i = 0; i<M; i++) {
        int j, k;

        cin >> j >> k;

        reverse(v.begin()+(j-1),v.begin()+k);
    }

    for (int i = 0; i<N; i++) {
        cout << v[i] << " " ;
    }


    return 0;
}