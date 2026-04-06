#include <iostream>
#include <stack>


using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    stack<int> s;
    int cnt = 1;
    string result;

    while (N--) {

        int num;
        cin >> num;

        while (cnt <= num) {
            s.push(cnt);
            cnt++;
            result += "+\n";
        }

        if (num != s.top()) {
            cout << "NO";
            return 0;
        }

        else {
            s.pop();
            result += "-\n";
        }
    }
    
    cout << result;

}
