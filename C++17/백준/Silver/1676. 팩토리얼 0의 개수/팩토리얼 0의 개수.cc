#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N;
    cin >> N;

    long long count = 0;
    for (long long i = 5; i <=N; i*=5) {
        count += N/i;
    }

    cout << count;

    return 0;
}