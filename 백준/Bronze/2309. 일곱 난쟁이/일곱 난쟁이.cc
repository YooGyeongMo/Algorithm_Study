#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[9], left = 0, right = 8, sum = 0, target = 0;

    for (int i = 0; i<9; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    target = sum - 100;
    sort (arr, arr+9);

    while (left < right) {
        if (arr[left] + arr[right] == target) {
            for (int i = 0; i<9; i++) {
                if (i == left || i == right) continue;
                cout << arr[i] << "\n";
            }
            return 0 ;
        }
        else if (arr[left] + arr[right] < target) {
            left++;
        }
        else {
            right--;
        }
    }

    return 0;
}