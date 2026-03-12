#include <iostream>
#include <string>

using namespace std;

int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[10] = { }, N, sixNineHab , mx = 0;

    cin >> N;

    while (N>0) {
        arr[N%10]++;
        N /= 10;
    }
    sixNineHab = (arr[6] + arr[9]) ;
    if (sixNineHab % 2 == 0) sixNineHab /= 2;
    else {
        sixNineHab = (sixNineHab / 2) + 1;
    }

    for (int i = 0 ; i< 10; i++) {
        if ( i == 6 || i == 9) continue;
        if (mx < arr[i]) mx = arr[i];
    }

    cout << max(mx, sixNineHab);
}