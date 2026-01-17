#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    int i;

    cin >> S;
    cin >> i;

    cout << S[i - 1];   // i는 1부터 시작하니까 -1 해줘야 함
    return 0;
}