#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, X, count = 0;
    cin >> N;

    int arr[101];
    for (int i=0; i<N; i++) {
        cin >> arr[i];
    }

    cin >> X;
    for (int i = 0; i<N; i++) {
        if (arr[i] == X) count ++;
    }
    cout << count ;
}