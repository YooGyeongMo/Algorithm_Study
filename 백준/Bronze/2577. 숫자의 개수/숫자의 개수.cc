#include <iostream>
#include <string>

using namespace std;

int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[10]= { }, idx = 0;

    long long x, result=1;

    for (int i = 0; i<3; i++) {
        cin >> x;
        result *= x;
    }
    while (result > 0) {
        int namerge = 0;
        namerge = result % 10;
        result /= 10;

        arr[namerge]++;
    }

    for (int i = 0 ; i<10; i++) {
        cout << arr[i] << "\n";
    }


}