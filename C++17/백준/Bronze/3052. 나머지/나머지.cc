#include <iostream>
#include <array>


using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    array <int,42> arr = {0};

    for (int i = 0; i<10; i++) {
        cin >> num;
        arr[num%42]++;
    }

    int count = 0;
    for (int i =0; i<42; i++) {
        if (arr[i]!=0) {
            count++;
        }
    }

    cout << count ;
    return 0;
}