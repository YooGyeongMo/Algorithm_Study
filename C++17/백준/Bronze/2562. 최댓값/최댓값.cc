#include <iostream>


using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    const int N = 10;
    int arr[N] = { 0 };
    int idx = 0;
    for (int i = 1; i<N; i++) cin >> arr[i];

    for (int i = 1; i<N; i++) {
        if (arr[idx] < arr[i]) idx = i;
    }

    cout << arr[idx] << "\n" << idx;
    return 0;
}