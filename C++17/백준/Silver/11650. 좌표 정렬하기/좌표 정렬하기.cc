#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool compare(const pair<int,int>& a, const pair<int, int>& b) {
    if (a.first == b.first) {
        return a.second < b.second;
    }
    else {
        return a.first < b.first;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    vector <pair<int,int>> v;
    pair<int, int> p;

    cin >> N;

    for (int i = 0; i<N; i++) {
        cin >> p.first >> p.second;
        v.push_back(p);
    }

    sort(v.begin(),v.end(),compare);

    for (int i = 0; i<N; i++) {
        cout << v[i].first << " " << v[i].second << "\n";
    }


    return 0;
}