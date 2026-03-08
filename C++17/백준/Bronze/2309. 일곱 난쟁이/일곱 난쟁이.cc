#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int arr[9];
    int sum = 0;

    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr, arr + 9);

    int target = sum - 100;   // 가짜 2명의 합
    int left = 0;
    int right = 8;

    while (left < right) {
        int twoSum = arr[left] + arr[right];

        if (twoSum == target) {
            for (int i = 0; i < 9; i++) {
                if (i != left && i != right) {
                    cout << arr[i] << '\n';
                }
            }
            break;
        } else if (twoSum < target) {
            left++;
        } else {
            right--;
        }
    }

    return 0;
}