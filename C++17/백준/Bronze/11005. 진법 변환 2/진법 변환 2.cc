#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;

    int N, M;
    cin >> N >> M;
    

    while (N >= M) {
        int a = 0;
        a = N%M;
        N = N/M;
        if (a<10) {
            str += char(a+'0');
        } else {
            str += a +'A'- 10;
        }
    }

    if (N>0) {
        int a = N%M;
        if (a<10) {
            str += char(a+'0');
        } else {
            str += a +'A'- 10;
        }
    }
    reverse(str.begin(),str.end());
    cout << str;

}