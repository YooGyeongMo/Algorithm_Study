#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int dp[1001] = {0};

    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i<=N; i++) {
        dp[i] = (dp[i-1] + dp[i-2])%10007;
    }

    cout << dp[N];
}