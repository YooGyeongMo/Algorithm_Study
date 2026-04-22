#include <iostream>
#include <queue>

using namespace std;

#define X first
#define Y second

int N,M;

int board[1001][1001];
int dist[1001][1001];

int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> M >> N;
    queue <pair<int, int>> map;

    for (int i = 0; i < N; i++) {
        fill(dist[i], dist[i]+M, -1);
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> board[i][j];

            if (board[i][j] == 1) {
                map.push({i,j});
                dist[i][j] = 0;
            }
        }
    }

    while (!map.empty()) {
        pair <int, int> cur = map.front();
        map.pop();

        for (int dir = 0 ; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if (board[nx][ny] != 0 || dist[nx][ny] != -1 ) continue;
            board[nx][ny] = 1;
            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
            map.push({nx,ny});
        }
    }

    int mx = 0;
    for (int i = 0; i<N; i++) {
        for (int j = 0; j <M; j++) {
            if (dist[i][j] == -1 && board[i][j] == 0 ) {
                cout << -1;
                return 0;
            }
            if (mx < dist[i][j]) mx = dist[i][j];
        }
    }

    cout << mx;

    return 0;
}