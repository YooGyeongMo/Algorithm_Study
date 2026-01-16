#include <iostream>
#include <vector>


using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N,M;

    cin >> N >> M;
    vector<int> v(N);

    for (int i=0; i<N; i++) {
        v[i] = i+1;
    }

    for (int i=0; i<M; i++) {
        int j, k, tmp;
        cin >> j >> k;
        tmp = v[j-1];
        v[j-1] = v[k-1];
        v[k-1] = tmp;
    }

    for (int i =0; i<N; i++) {
        cout << v[i] << " " ;
    }

    return 0;
}