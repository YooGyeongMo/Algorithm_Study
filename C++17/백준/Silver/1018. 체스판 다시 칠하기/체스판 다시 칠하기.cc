#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int whenB(const vector<string>& w, int row, int col) {
    int count = 0;

    for (int i = 0; i<8; i++) {
        for (int j = 0; j<8; j++) {
            char charB = ((i+j)%2==0) ? 'B' : 'W';
            if (w[row+i][col+j] != charB) count++;
        }
    }
    return count;
}

int whenW(const vector<string>& w, int row, int col) {
    int count = 0;

    for (int i = 0; i<8; i++) {
        for (int j = 0; j<8; j++) {
            char charW = ((i+j)%2==0) ? 'W' : 'B';
            if (w[row+i][col+j] != charW) count ++;
        }
    }

    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    int countW = 0;
    int countB = 0;

    cin >> N >> M;

    vector <string> v(N);

    for (int i = 0; i<N; i++) {
        cin >> v[i];
    }
    int ans = 64;

   for (int i = 0; i<= N-8; i++) {
       for (int j = 0; j<= M-8; j++) {
           int W,B = 0;
           W = whenW(v,i,j);
           B = whenB(v,i,j);

           ans = min(ans, min(W,B));
       }
   }

    cout << ans;
    return 0;
}