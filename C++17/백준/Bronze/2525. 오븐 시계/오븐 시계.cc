#include <iostream>

using namespace std;

int main() {
    int H,M,C;
    cin >> H >> M >> C;

    C += (H*60)+M;
    H = (C/60) % 24;
    M = (C%60);

    cout << H << " " << M << endl;
}