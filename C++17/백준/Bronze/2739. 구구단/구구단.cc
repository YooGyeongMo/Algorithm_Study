#include <iostream>
using namespace std;

int main() {
    int N;
    int i = 1;
    cin >> N;
    while (i < 10) {
        cout << N << " * " << i << " = " << N*i <<"\n";
        i++;
    }
    return 0;
}