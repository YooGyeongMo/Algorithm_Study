#include <iostream>
#include <cstring>

using namespace std;

int M, N, K;
int farm[50][50];
bool visited[50][50];

int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

void dfs(int y, int x) {
    visited[y][x] = true;

    for (int d = 0; d<4; d++) {
        int ny = y+dy[d];
        int nx = x+dx[d];

        if (ny < 0 || ny >= N || nx < 0 || nx >= M) continue;
        if (farm[ny][nx] == 1 && !visited[ny][nx]) {
            dfs(ny,nx);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        cin >> M >> N >> K;
        memset(farm, 0, sizeof(farm));
        memset(visited, false, sizeof(visited));

        for (int i = 0; i<K; i++) {
            int x, y;
            cin >> x >> y;
            farm[y][x] = 1;
        }
        int count = 0;

        for (int y = 0; y<N; y++) {
            for (int x = 0; x<M; x++) {
                if (farm[y][x] == 1 && !visited[y][x]) {
                    count++;
                    dfs(y,x);
                }
            }
        }
        cout << count << "\n";

    }
}