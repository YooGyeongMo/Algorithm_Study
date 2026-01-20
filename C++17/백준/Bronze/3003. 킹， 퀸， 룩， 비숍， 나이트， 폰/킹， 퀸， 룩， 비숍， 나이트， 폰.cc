#include <iostream>
#include <array>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    array <int, 6> arr = {1, 1, 2, 2, 2, 8};
    array <int ,6> arr2;



    for (int i = 0; i<arr2.size(); i++) {
        cin >> arr2[i];
        arr2[i] = arr[i] - arr2[i];
    }

    for (int i = 0; i<arr2.size(); i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}