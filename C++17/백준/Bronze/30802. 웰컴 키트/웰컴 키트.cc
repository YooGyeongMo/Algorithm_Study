#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    int T, P;
    int arr[6];

    cin >> N;
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }
    cin >> T >> P;

    int countT = 0;
    for (int i = 0; i < 6; i++) {
        countT += (arr[i] + T - 1) / T;  // 티셔츠 묶음
    }

    int mnPgroup = N / P;  // 펜 묶음
    int mnPcount = N % P;

    cout << countT << "\n";
    cout << mnPgroup << " " << mnPcount;
}