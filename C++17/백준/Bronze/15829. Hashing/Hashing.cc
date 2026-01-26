#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    string str;
    long long result = 0;
    long long MOD = 1234567891;
    cin >> N;
    cin >> str;
    long long p = 1;

    for (int i = 0; i<N; i++) {
        int value = 0;
        value = str[i] - 'a' + 1;
        result = ( result + value * p) % MOD;
        p = (p * 31) % MOD ;
    }

    cout << result;

}