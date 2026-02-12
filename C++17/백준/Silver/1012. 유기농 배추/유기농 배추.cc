#include <iostream>
#include <vector>

using namespace std;

int M,N,K;
vector<vector<int>> farm;

//상하 좌우
int xArr[4] = {-1,1,0,0};
int yArr[4] = {0,0,-1,1};


void dfs(int y, int x) {
    farm[y][x] = 0;

    for (int d = 0; d<4; d++) {
        int ny = y + yArr[d];
        int nx = x + xArr[d];

        if (0 <= ny && ny < N && 0<=nx && nx < M) {
            if (farm[ny][nx] == 1) {
                dfs(ny,nx);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    for (int i = 0; i<T; i++) {
        cin >> M >> N >> K;
        // vector<vector<int>> farm(N,vector<int>(M,0));
        farm.assign(N, vector<int>(M, 0));

        int count = 0;

        for (int j = 0; j<K; j++) {
            int x, y;
            cin >> x >> y;
            farm[y][x] = 1;
            }

        for (int y = 0; y<N; y++) {
            for (int x = 0; x<M; x++) {
                if (farm[y][x]==1) {
                    count++;
                    dfs(y,x);
                }
            }
        }
        cout << count << "\n";
    }
}