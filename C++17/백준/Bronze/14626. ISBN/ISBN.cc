#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[13] = {0};

    string ISBN;

    int starIDX = 0;
    int sum = 0;

    cin >> ISBN;

    for (int i = 0; i<13; i++) {
        if (isdigit(ISBN[i])) {
            
            if (i%2==0) {
                arr[i] = ISBN[i] - '0';
                sum += arr[i];
            }
            else if (i%2 != 0) {
                arr[i] = (ISBN[i] - '0') * 3;
                sum += arr[i];
            }

        } else {
            starIDX = i;
        }
    }

    int weight = (starIDX%2==0) ? 1 : 3;

    for (int i = 0; i<=9; i++) {
        if ((sum + i * weight ) % 10 == 0) {
            cout << i;
            break;
        }
    }

    return 0;
}