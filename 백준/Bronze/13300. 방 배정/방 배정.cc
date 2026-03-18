#include <iostream>
#include <string>

using namespace std;

int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K, S, Y, ans = 0;
    int arr[2][7] = {};
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> S >> Y;
        arr[S][Y]++;
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 1; j < 7; j++) {
            ans += arr[i][j]/K;
            if (arr[i][j]%K) ans++;
        }
    }

    cout << ans;


}