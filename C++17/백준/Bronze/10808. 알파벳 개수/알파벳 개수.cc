#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    int count[26];
    fill(count,count+26,0);

    cin >> s;

    for ( char c: s) {
        count[c-'a']++;
    }

    for (int i = 0 ; i<26; i++) {
        cout << count[i] << ' ';
    }

    return 0;
}