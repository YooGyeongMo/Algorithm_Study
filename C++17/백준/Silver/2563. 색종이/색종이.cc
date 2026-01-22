#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int result[101][101] = {0};

    int M;
    cin >> M;

    for (int i = 0; i<M; i++) {
        int a, b;
        cin >> a >> b;
        
            for (int j = b; j<b+10; j++) {
                for (int k = a; k<a+10; k++) {
                    result[j][k] = 1;
                }
            }
    }

    int count = 0;

    for (int i = 0; i<101; i++) {
        for (int j = 0; j<101; j++) {
            count += result[i][j];
        }
    }

    cout << count ;

}