#include <iostream>

using namespace std;

bool check666(int a) {
    while (a>=666) {
        if (a%1000 == 666) return true;
        a /= 10;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N,count = 0;
    int start = 666;

    cin >> N;

    while (1) {

        if (check666(start)) {
            count++;
        }

        if (N==count) {
            cout << start;
            break;
        }
        
        start++;
    }

    return 0;
}