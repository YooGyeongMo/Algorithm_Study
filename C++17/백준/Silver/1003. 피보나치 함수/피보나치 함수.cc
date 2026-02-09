#include <iostream>
#include <vector>

using namespace std;

int memo[40] = {0,1};

int fibonacci(int n) {
    if (n==0 || n==1) {
        return memo[n];
    }
    for (int i = 2; i<=n; i++) {
        memo[i] = memo[i-1] + memo[i-2];
    }
    return memo[n];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    for (int i = 0; i<T; i++) {
        int n;
        cin >> n;
        if (n == 0) {
            cout << "1 0\n";
            continue;
        }
        fibonacci(n);
        cout << memo[n-1] << " " << memo[n] << "\n";
    }

    return 0;
}