#include <iostream>
#include <string>

using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B, V;

    int day = 1;

    cin >> A >> B >> V;

    day += (V-A)/(A-B) ;

    if ((V-A)%(A-B) != 0) {
        day++;
    }

    if (A >= V ) {
        cout << "1";
    }
    else {
        cout << day;
    }


}