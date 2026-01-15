#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    int tmp = A;

    if (A == B & B == C)
        cout << 10000+A*1000 << endl;
    else if (A==B || B==C || A==C) {
        if (A==B || B==C)
            cout << 1000 + B*100;
        else
            cout << 1000 + C*100;
    }
    else {
        if (B > tmp ) tmp = B;
        if (C > tmp ) tmp = C;

        cout << tmp * 100 << endl;
    }

    return 0;
}