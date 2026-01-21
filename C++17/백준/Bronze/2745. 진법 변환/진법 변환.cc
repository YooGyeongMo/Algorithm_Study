#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    int M;
    cin >> str >> M;
    int result = 0;
    
    for (int i = 0; i < str.size(); i++) {
        int a = 0;
        if (isdigit(str[i])) {
            a = (str[i] -'0');
        } else {
            a = (str[i] - 'A') + 10;
        }

        result = result * M + a;
    }

    cout << result ;

}