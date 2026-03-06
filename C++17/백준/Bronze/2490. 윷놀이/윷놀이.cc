#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[3][4] = { };

    for (int i = 0; i<3; i++) {
        int rowValue = 0;
        for (int j = 0; j<4; j++) {
            cin >> arr[i][j];

            if (arr[i][j] == 1) {
                rowValue++;
            }
        }

        switch (rowValue) {
            case 0:
                cout << "D\n";
                break;
            case 1:
                cout << "C\n";
                break;
            case 2:
                cout << "B\n";
                break;
            case 3:
                cout << "A\n";
                break;
            case 4:
                cout << "E\n";
                break;
        }
    }
    return 0;
}