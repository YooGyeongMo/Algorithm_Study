#include <iostream>
#include <stack>
#include <utility>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    long long result = 0;
    cin >> N;

    stack<int> tower;

    for (int i = 0; i < N; i++) {
        int height;
        cin >> height;

        while (!tower.empty() && tower.top() <= height) {
            tower.pop();
        }
        result += tower.size();
        tower.push(height);

    }
    
    cout << result ;


}