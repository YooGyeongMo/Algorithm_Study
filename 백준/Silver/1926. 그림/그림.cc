#include <iostream>
#include <deque>

#define X first
#define Y second

int N, M;
int board[501][501];
bool visited[501][501];
int cnt = 0, mx = 0;

int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;


    for (int i = 1 ; i <= N; i++) {
        for (int j = 1 ; j <= M; j++) {
            cin >> board[i][j];
        }
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <=M; j++) {
            if (visited[i][j] || board[i][j] == 0 ) continue;
            cnt++;
            deque<pair<int, int>> q;
            visited[i][j] = 1;
            q.push_front({i,j});
            int width = 1;
            while (!q.empty()) {
                pair <int, int> cur = q.front();
                q.pop_front();
                for (int dir = 0 ; dir < 4; dir++) {
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];

                    if (nx < 1 || nx > N || ny < 1 || ny > M) continue;
                    if (visited[nx][ny] || board[nx][ny] != 1) continue;
                    visited[nx][ny] = 1;
                    width++;
                    q.push_front({nx,ny});
                }
            }
            if ( mx < width ) mx = width;
        }
    }

    cout << cnt << "\n";
    cout << mx ;

    return 0;
}