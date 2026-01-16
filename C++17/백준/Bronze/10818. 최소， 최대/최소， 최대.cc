#include <iostream>


using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N,X;
    cin >> N ;

    int mx = -1000001;
    int mn = 1000000;
    for (int i = 0 ; i<N; i++) {
        cin >> X;
        if (X > mx ) mx = X;
        if (X < mn ) mn = X;
    }

    cout << mn << " " << mx;
}