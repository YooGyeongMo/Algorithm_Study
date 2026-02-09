#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;

    cin >> N >> M;

    unordered_map <string, bool> check;
    vector <string> a;
    int count = 0;

    for (int i = 0; i<N; i++) {
        string str;
        cin >> str;
        check[str] = true;
    }

    for (int j = 0; j<M; j++) {
        string str;
        cin >> str;
        if (check.find(str) != check.end()) {
            count++;
            a.push_back(str);
        }
    }

    sort(a.begin(), a.end());

    cout << count << "\n";

    for (int i = 0; i<count; i++) {
        cout << a[i] << "\n";
    }

    return 0;
}