#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[9], result[7];

    for (int i = 0; i<9; i++) cin >> arr[i];

    for (int i = 0; i<8; i++) {
        int sum = 0;
        for (int j = i+1; j<9; j++) {
            sum = 0;

            for (int z = 0, idx = 0; z<9; z++) {
                if (z != i && z != j) result[idx++] = arr[z];
            }

            for (int a = 0; a < 7; a++ ) sum += result[a];

            if (sum == 100) break;
        }
        if (sum == 100) break;
    }


    sort(result, result+7);
    for (int i = 0 ; i<7; i++) cout << result[i] << "\n";

    return 0;
}