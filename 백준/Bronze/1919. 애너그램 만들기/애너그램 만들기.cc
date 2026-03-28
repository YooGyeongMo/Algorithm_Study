#include <iostream>
#include <string>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr [2][26] = {};

    string str1, str2;

    cin >> str1 >> str2 ;

    int result = 0;

    for (char c: str1) arr[0][c-'a']++;
    for (char c: str2) arr[1][c-'a']++;

    for (int i = 0; i<26; i++) {
        result += abs(arr[0][i] - arr[1][i]) ;
    }

    cout << result;
}