#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector <string> str(3);
    int convertInt = 0;

    for (int i = 0; i<3; i++) {
        cin >> str[i];

        if (isdigit(str[i][0])) {
            convertInt = stoi(str[i]) + (3-i);
        }
    }

    if (convertInt % 3 == 0 && convertInt % 5 == 0) {
        cout << "FizzBuzz";
    }
    else if (convertInt % 3 == 0) {
        cout << "Fizz";
    }
    else if (convertInt % 5 == 0) {
        cout << "Buzz";
    }
    else {
        cout << convertInt;
    }

    return 0;
}