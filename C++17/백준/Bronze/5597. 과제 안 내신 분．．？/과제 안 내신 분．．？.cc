#include <iostream>
#include <array>


using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    array<int,31> arr = {0};

    for (int i = 0; i<28; i++) {
        int M;
        cin >> M;
        arr[M] = M;
    }

    int mx = 0, mn = 0;

    for (int i = 1; i<31; i++) {
        if (arr[i] == 0) {
            if (mn == 0) mn = i;
            else mx = i;
        }
    }

    cout << mn << "\n" << mx ;


    return 0;
}