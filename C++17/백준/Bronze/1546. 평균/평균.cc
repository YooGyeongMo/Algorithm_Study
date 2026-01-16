#include <iostream>
#include <array>


using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    array<int,1000> arr = {0};

    for (int i = 0; i<N; i++) {
        int m;
        cin >> m;
        arr[i] = m;
    }

    double sum = 0;
    double mx = 0;
    for (int i = 0; i<N; i++) {
        sum += arr[i];
    }

    for (int i = 0; i<N; i++) {
        if (mx < arr[i]) mx = arr[i];
    }

    double result = ((sum/mx)*100)/N;

    cout.precision(13);
    cout << result ;


    return 0;
}