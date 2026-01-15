#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int A,B;
    
    while(!(cin >> A >> B).eof()) {
        cout << A+B << "\n";
    }
    return 0;
}