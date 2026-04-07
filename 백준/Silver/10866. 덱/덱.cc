#include <iostream>
#include <string>

using namespace std;

const int MX = 1000005;
int dat[2*MX+1];
int head = MX , tail = MX;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;

    cin >> N;

    while (N--) {
        string cmp;
        cin >> cmp;

        if ( cmp == "push_front") {
            int x ;
            cin >> x;
            dat[--head] = x;
        }

        else if ( cmp == "push_back") {
            int x;
            cin >> x;
            dat[tail++] = x;
        }

        else if (cmp == "pop_front") {
            if (head==tail) cout << -1 << "\n";
            else {
                cout << dat[head] << "\n";
                head++;
            }
        }

        else if (cmp == "pop_back") {
            if (head==tail) cout << -1 << "\n";
            else {
                cout << dat[tail-1] << "\n";
                tail--;
            }
        }

        else if (cmp == "size") {
            cout << tail-head << "\n";
        }

        else if (cmp == "empty") {
            if (head==tail) {
                cout << 1 << "\n";
            }
            else {
                cout << 0 << "\n";
            }
        }

        else if (cmp == "front") {
            if (head==tail) {
                cout << -1 << "\n";
            }
            else {
                cout << dat[head] <<"\n";
            }
        }

        else {
            if (head==tail) {
                cout << -1 << "\n";
            }
            else {
                cout << dat[tail-1] << "\n";
            }
        }
    }
}