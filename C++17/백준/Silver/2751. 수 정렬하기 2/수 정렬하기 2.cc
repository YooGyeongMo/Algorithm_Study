#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector <int> v;

    int N;
    cin >> N;
    int num;

    for (int i = 0; i<N; i++) {
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(),v.end());

    for (int i = 0; i<N; i++) {
        cout << v[i] << "\n";
    }

    return 0;
}