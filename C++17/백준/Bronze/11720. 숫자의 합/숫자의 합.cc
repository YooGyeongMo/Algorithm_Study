#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, sum = 0;

    string str;

    cin >> N;
    cin.ignore();
    getline(cin, str);

    for (int i = 0; i<N; i++) {
        int m = str[i] - '0' ;
        sum += m;
    }

    cout << sum ;

    return 0;
}