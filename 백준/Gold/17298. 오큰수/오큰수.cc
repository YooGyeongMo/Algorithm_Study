#include <iostream>
#include <stack>

using namespace std;

int a[1000001] = {};
int ans[1000001] = {};
stack<int> s;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    for (int i = 0; i<N; i++) {
        cin >> a[i];
    }

    for (int i = N-1; i>-1; i--) {
        while ( !s.empty() && s.top() <= a[i] ) {
            s.pop();
        }
        if (s.empty()) ans[i] = -1;
        else ans[i] = s.top();
        
        s.push(a[i]);
    }

    for (int i = 0; i<N; i++) {
        cout << ans[i] << " ";
    }

}