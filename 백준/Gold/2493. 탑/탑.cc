#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;

    stack<pair<int,int>> tower;

    for (int i = 0; i < N; i++) {
        int height;
        cin >> height;

        while (!tower.empty() && tower.top().first < height) {
            tower.pop();
        }
        if (tower.empty()) cout << 0 << " ";
        else cout << tower.top().second << " ";

        tower.push({height,i+1});

    }
}