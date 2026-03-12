#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[21];

    for (int i = 1; i<21; i++ ) {
        arr[i] = i;
    }

    for (int i = 0; i<10; i++) {
        int a, b;
        cin >> a >> b;
        reverse(arr+a,arr+b+1);
    }

    for (int i = 1; i<21; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}