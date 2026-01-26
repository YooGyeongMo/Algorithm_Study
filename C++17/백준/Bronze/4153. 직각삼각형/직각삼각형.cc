#include <iostream>

using namespace std;

int main() {
    int a,b,c;

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while (1) {
        int temp = 0;
        cin >> a >> b >> c;

        if ( a==0 && b==0 && c==0) break;

        if (a>c) {
            temp = c;
            c = a;
            a = temp;
        }
        else if (b>c) {
            temp = c;
            c = b;
            b = temp;
        }

        if ( c*c != a*a + b*b ) cout << "wrong\n";
        else cout << "right\n";
    }
}