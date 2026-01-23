#include <iostream>
#include <vector>

using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;

    while (cin >> N) {

        vector <int> v = {};
        int sum = 0;

        if (N == -1) return 0;

        for (int i = 1; i<N; i++) {
            if (N%i == 0) {
                v.push_back(i);
            }
        }

        for (int i = 0; i<v.size();i++) {
            sum += v[i];
        }

        if (sum == N) {
            cout << N << " = ";
            for (int i = 0; i<v.size()-1; i++) {
                cout << v[i] << " + ";
            }
            cout << v[v.size()-1] << "\n";
        }
        else {
            cout << N << " is NOT perfect." << "\n";
        }
    }

}