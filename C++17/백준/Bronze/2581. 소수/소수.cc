#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int A) {
    bool primeCheck = true;

    for (int i = 2; i*i <= A; i++) {
        if (A%i==0) {
            primeCheck = false;
            return primeCheck;
        }
    }
    return primeCheck;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int M, N;
    cin >> M >> N;

    vector <int> result = {};
    int sum = 0;

    for (int i = M; i <= N; i++) {
        if (i > 1 && isPrime(i)) {
            result.push_back(i);
            sum += i;
        }
    }

    if (result.empty()) {
        cout << "-1" ;
    }else {
        cout << sum << "\n" << result[0];
    }

    return 0 ;
}