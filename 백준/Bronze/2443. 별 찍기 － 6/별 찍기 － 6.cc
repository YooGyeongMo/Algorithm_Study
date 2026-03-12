#include <iostream>

using namespace std;

int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;

    cin >> N;

    for (int i = 1; i<=N; i++) {
        for (int j = 1; j<i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2*(N-i)+1; j++) {
            cout << "*";
        }
        cout << "\n";
    }

}