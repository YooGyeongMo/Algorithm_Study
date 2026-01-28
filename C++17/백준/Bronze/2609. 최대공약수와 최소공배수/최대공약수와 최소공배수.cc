#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A,B;
    int GCD, LCM;
    cin >> A >> B;
    LCM = A*B;

    while (B>0) {

        if (A%B == 0 ) break;

        int temp = B;
        B = A%B;
        A = temp;

    }

    cout << B  << " " << LCM/B;

   return 0;
}