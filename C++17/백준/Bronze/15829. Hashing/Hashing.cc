#include <iostream>

using namespace std;

int sqrt(int a, int b) {
    int result = 1;

    while (b > 0) {
        b--;
        result *= a;
    }

    return result;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int L;
    string str;
    int result = 0;
    cin >> L;
    cin >> str;

    for (int i = 0; i < str.size(); i++) {
        result += sqrt(31,i) * ( str[i] - 'a' + 1);
    }

    cout << result;
}