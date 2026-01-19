#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string M, N;

    cin >> M;
    cin >> N;

    reverse(M.begin(), M.end() );
    reverse(N.begin(), N.end());

    int result = stoi(M) > stoi(N) ? stoi(M) : stoi(N);

    cout << result ;


    return 0;
}