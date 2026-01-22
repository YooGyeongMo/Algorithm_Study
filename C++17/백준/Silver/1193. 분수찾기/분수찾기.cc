#include <iostream>
#include <string>

using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N = 0;

    cin >> N;

    int layer = 1;
    int sum = 1;
    int i = 1;

    while (N > sum ) {
        layer++;
        i++;
        sum += i;
    }

    int C = 0;

    for (int k = 1; k <= layer-1; k++) {
        C += k;
    }

    C = N - C;

    if (layer%2==0) {
        int A = 1;
        int B = layer;

        for (int j = 1; j < C; j++) {
            A += 1;
            B -= 1;
        }
        cout << A <<"/"<< B ;
    } else {
        int A = layer;
        int B = 1;
        for (int j = C; j > 1; j--) {
            A -= 1;
            B += 1;
        }
        cout << A << "/" << B ;
    }
}