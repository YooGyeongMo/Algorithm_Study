#include <iostream>
#include <queue>
#include <string>

using namespace std;

#define X first
#define Y second

int R, C;

string miro[1001];
int jihunDist[1001][1001];
int fireDist[1001][1001];

int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> R >> C;

    for (int i = 0; i<R; i++) {
        cin >> miro[i];
    }

    for (int i = 0; i<R; i++) {
        fill(jihunDist[i], jihunDist[i]+C,-1);
        fill(fireDist[i], fireDist[i]+C,-1);
    }

    queue<pair<int,int>> human;
    queue<pair<int,int>> fire;


    for (int i = 0; i<R; i++) {
        for (int j = 0; j<C; j++) {
            if (miro[i][j] == 'J') {
                human.push({i,j});
                jihunDist[i][j] = 0;
            }

            if (miro[i][j]=='F') {
                fire.push({i,j});
                fireDist[i][j] = 0;
            }
        }
    }

    while (!fire.empty()) {
        auto cur = fire.front();
        fire.pop();

        for ( int dir = 0 ; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
            if (miro[nx][ny] == '#' || fireDist[nx][ny] >= 0 ) continue;
            fireDist[nx][ny] = fireDist[cur.X][cur.Y] + 1;
            fire.push({nx,ny});
        }
    }

    while (!human.empty()) {
        auto cur = human.front();
        human.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= R || ny < 0 || ny >= C) {
                cout << jihunDist[cur.X][cur.Y] + 1;
                return 0 ;
            }
            if (miro[nx][ny] == '#' || jihunDist[nx][ny] >= 0) continue;
            if (fireDist[nx][ny] != -1 && fireDist[nx][ny] <= jihunDist[cur.X][cur.Y] + 1) continue;
            jihunDist[nx][ny] = jihunDist[cur.X][cur.Y] + 1;
            human.push({nx,ny});
        }
    }
    
    cout << "IMPOSSIBLE";
    
    return 0;
}