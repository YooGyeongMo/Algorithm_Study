#include <iostream>
#include <deque>
#include <string>

using namespace std;

#define X first
#define Y second

int N, M;

string board[101];
int dist[101][101] = {-1};

int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;

    for (int i = 1; i<= N ; i++) {
        cin >> board[i];
    }

    for (int i = 1; i <=N; i++) {
        fill(dist[i], dist[i]+M-1, -1);
    }

    deque<pair<int, int>> map;
    map.push_front({1,1});
    dist[1][1] = 1;
    while (!map.empty()) {
        pair<int, int> cur = map.front();
        map.pop_front();
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 1 || nx > N || ny < 1 || ny > M) continue;
            if (dist[nx][ny] >= 1 || board[nx][ny-1] != '1') continue;

            dist[nx][ny] = dist[cur.X][cur.Y]+1;
            map.push_back({nx,ny});
        }
    }

    cout << dist[N][M];

    return 0;
}