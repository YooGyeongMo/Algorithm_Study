#include <iostream>
#include <stack>



using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;

    cin >> N;

    stack<pair<int, int>> tower;

    for (int i = 0; i < N; i++) {
        int height;
        cin >> height;

        while (!tower.empty()) {
            if (tower.top().second > height) {
                cout << tower.top().first << " ";
                break;
            }
            tower.pop();
        }
        if (tower.empty()) {
            cout << 0 << " ";
        }

        tower.push(make_pair(i+1, height));
    }


    return 0;
}