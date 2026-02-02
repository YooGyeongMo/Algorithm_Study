#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;

    cin >> N;

    vector <pair<int,int>> p(N);

    for (int i = 0; i<N;i++) {
        cin >> p[i].first >> p[i].second;
    }

    for (int i = 0; i < N; i++) {
        int rank = 1;
        for (int j = 0; j < N; j++) {
            if (i==j) continue;
            if (p[j].first > p[i].first && p[j].second > p[i].second) {
                rank++;
            }
        }
        cout << rank << (i== N-1 ? '\n' : ' ');
    }

    return 0;
}