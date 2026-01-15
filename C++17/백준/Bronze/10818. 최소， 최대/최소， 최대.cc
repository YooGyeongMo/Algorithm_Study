#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int mx = -1000000;
    int mn = 1000000;

    int arr[N+1];

    for (int i =0; i<N; i++) {
        cin >> arr[i];
        if ( mx < arr[i] ) {
            mx = arr[i];
        }
        if (mn > arr[i]) {
            mn = arr[i];
        }
    }

    cout << mn << " " << mx;

    return 0;
}