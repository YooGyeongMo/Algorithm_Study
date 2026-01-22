#include <iostream>
#include <string>

using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    int result = 1;
    for (int i = 0; i<N; i++) {
        result *= 2;
    }
    result += 1;
    cout << result * result ;
}