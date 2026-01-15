#include <iostream>
using namespace std;

int main() {
    int X,count,a,b;
    cin >> X >> count;
    int sum = 0;
    for (int i =0; i<count; i++) {
        cin >> a >> b;
        sum += a*b;
    }
    cout << ((X==sum) ? "Yes" : "No") << endl;
}