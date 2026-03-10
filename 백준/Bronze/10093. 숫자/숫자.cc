#include <iostream>
using namespace std;

int main() {
    long long A, B;
    cin >> A >> B;

    long long start = min(A, B);
    long long end = max(A, B);

    long long count = end - start - 1;

    if (count < 0) count = 0;

    cout << count << '\n';

    for (long long i = start + 1; i < end; i++) {
        cout << i << ' ';
    }

    return 0;
}