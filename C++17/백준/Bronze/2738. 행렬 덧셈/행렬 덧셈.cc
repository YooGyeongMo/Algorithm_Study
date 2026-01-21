#include <iostream>


using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;

    cin >> N >> M;

    int result[101][101] = {0};

    for (int k = 0; k<2; k++) {
        int arr[N][M];
        for (int i = 0; i<N;i++) {
            for (int j = 0; j<M; j++) {
                cin >> arr[i][j];
                result[i][j] += arr[i][j];
            }
        }
    }

    for (int i=0; i<N;i++) {
        for (int j=0; j<M;j++) {
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }
}