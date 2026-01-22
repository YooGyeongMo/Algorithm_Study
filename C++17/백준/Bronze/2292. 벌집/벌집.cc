#include <iostream>
#include <string>

using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;

    cin >> N;

    int count = 1;
    int layer = 1;

    while (N > count) {
        count += 6*layer;
        layer++;
    }

    cout << layer;

}