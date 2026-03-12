#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long A, B;
    int cnt = 0;
    cin >> A >> B;

    long long start = min(A,B);
    long long end = max(A,B);

    cnt = end - start - 1;

    if (cnt < 0) cnt = 0;

    cout << cnt << "\n" ;

    for (long long i = start+1; i < end; i++) {
        cout << i << " ";
    }

    return 0;
}