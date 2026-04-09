#include <iostream>
#include <stack>

using namespace std;

int a[1000001] = {};
int ans[1000001];
stack<int> s;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    fill(ans, ans+1000001, -1);

    int N;
    cin >> N;

    for (int i = 0; i<N; i++) {
        cin >> a[i];
    }

    for (int i = 0; i<N; i++) {
        while ( !s.empty() && a[s.top()] < a[i] ) {
            ans[s.top()] = a[i];
            s.pop();
        }
        s.push(i);
    }

    for (int i = 0; i<N; i++) {
        cout << ans[i] << " ";
    }

}