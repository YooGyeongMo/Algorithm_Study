#include <iostream>
#include <algorithm>

using namespace std;

int arr[21];

void reverse (int a, int b) {
    for (int i = 0; i < (b-a+1)/2; i++) {
        int temp = arr[a+i];
        arr[a+i] = arr[b-i];
        arr[b-i] = temp;
    }
}
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 1; i<21; i++ ) {
        arr[i] = i;
    }

    for (int i = 0; i<10; i++) {
        int a, b;
        cin >> a >> b;
        // reverse(arr+a,arr+b+1);
        reverse(a,b);
    }


    for (int i = 1; i<21; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}