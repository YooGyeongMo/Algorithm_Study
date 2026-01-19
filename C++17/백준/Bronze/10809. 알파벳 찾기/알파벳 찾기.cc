#include <iostream>
#include <string>
#include <array>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    array <int,26> arr;

    arr.fill(-1);

    string str;

    cin >> str;

    for (int i = 0; i<str.size(); i++) {
        int arrIdx = str[i]%97;

        if (arr[arrIdx] < 0) {
            arr[arrIdx] = i;
        }
    }

    for (int i = 0; i<arr.size(); i++) {
        cout << arr[i] << " ";
    }



    return 0;
}