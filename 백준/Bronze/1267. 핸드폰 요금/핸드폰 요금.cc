#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int A = 30, B = 60;

    int N, aSum = 0, bSum = 0;

    cin >> N;

    for (int i = 0; i<N; i++) {
        int x;
        cin >> x;
        aSum += (x/A + 1) * 10;
        bSum += (x/B + 1) * 15;
    }

    if (aSum == bSum) cout << "Y M " << aSum;
    else {
        ( aSum < bSum ) ? (cout << "Y " << aSum) : (cout << "M " << bSum);
    }

    return 0;
}