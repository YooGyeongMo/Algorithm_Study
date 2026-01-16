#include <iostream>


using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;
    int arr[100] = {0};

    for (int i = 0; i<M; i++) {
        int h,j,k;
        cin >> h >> j >> k;
        for (int idx = h-1; idx <= j-1; idx++) {
            arr[idx] = k;
        }
    }

    for (int i = 0; i<N; i++) {
        cout << arr[i] << " " ;
    }

    return 0;
}