#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int M;
    string str;
    cin >> M;
    for (int i = 0; i<M; i++) {
        cin >> str;

        cout << str[0] << str[str.length()-1] << "\n" ;
    }

    return 0;
}