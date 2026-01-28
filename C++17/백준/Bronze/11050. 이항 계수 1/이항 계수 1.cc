#include <iostream>

using namespace std;

int factorial(int n) {
    int result = 1;

    for (int i = 1; i<=n; i++) {
        result *= i;
    }

    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;

    cin >> N >> K;

    int result = factorial(N) / (factorial(K) * factorial(N-K));

    cout << result ;

    return 0;
}