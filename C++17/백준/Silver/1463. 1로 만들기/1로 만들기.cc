#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    int dp[1000001] = {0};
    cin >> N;

    for (int i = 2; i<=N; i++) {
        dp[i] = dp[i-1] + 1;
        if ( i % 2 == 0) {
            dp[i] = min(dp[i], dp[i/2] + 1);
        }
        
        if (i % 3 == 0) {
            dp[i] = min(dp[i], dp[i/3]+1);
        }
    }
    cout << dp[N];
}