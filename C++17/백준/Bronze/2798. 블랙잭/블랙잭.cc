#include <iostream>
#include <vector>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector <int> v(N);

    int sum = 0;

    for (int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }
    for (int i = 0; i < v.size(); i++) {
        int result = 0;
        for (int j = 1; j < v.size(); j++) {
            for (int z = 2; z < v.size(); z++) {
                if ( i == j || i == z || j == z ) continue;

                result = v[i] + v[j] + v[z];

                if (sum < result && result <= M) sum = result;
            }
        }
    }

    cout << sum;
}