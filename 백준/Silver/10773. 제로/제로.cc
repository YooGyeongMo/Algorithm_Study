#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, result = 0;

    cin >> N;

    vector<int> v;

    while (N--) {
        int num;
        cin >> num;

        if (!num) {
            v.pop_back();
        }
        else {
            v.push_back(num);
        }
    }

    for (int i = 0; i < v.size(); i++) {
        result += v[i];
    }

    cout << result ;
}