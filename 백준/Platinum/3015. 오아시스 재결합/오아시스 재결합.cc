#include <iostream>
#include <stack>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    stack<pair<int, int>> s;

    long long result = 0;

    cin >> N;

    while (N--) {
        int h;
        cin >> h;
        int cnt = 1;

        while (!s.empty() && s.top().first <= h) {
            result += s.top().second;
            if (s.top().first == h) cnt += s.top().second;
            s.pop();
        }
        if (!s.empty()) result++;
        s.push({h, cnt});
    }
    
    cout << result;

}