#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Member {
    int age;
    string name;
    int idx;
};

bool compare(const Member& a, const Member& b) {
    if (a.age != b.age) {
        return a.age < b.age;
    }
    else {
        return a.idx < b.idx;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    string name;
    vector <Member> v;
    Member m;

    cin >> N;

    for (int i = 0; i<N; i++) {
        cin >> m.age >> m.name;
        m.idx = i;
        v.push_back(m);
    }

    sort(v.begin(),v.end(),compare);

    for (int i = 0; i <N; i++) {
        cout << v[i].age << " " << v[i].name << '\n';
    }

    return 0;
}