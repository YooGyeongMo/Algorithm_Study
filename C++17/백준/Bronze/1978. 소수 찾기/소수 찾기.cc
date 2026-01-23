#include <iostream>
#include <vector>

using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N ;
    cin >> N;
    int result = 0;
    for (int i = 0; i<N; i++) {
        int A;
        cin >> A;
        int count = 0;
        for (int j = 2; j*j <= A; j++ ) {
            if (A%j == 0) {
                count++;
                break;
            }
        }

        if ( A>= 2 && count == 0) {
            result++;
        }
    }

    cout << result;
    return 0 ;
}