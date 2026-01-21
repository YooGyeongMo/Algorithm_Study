#include <iostream>
#include <string>
#include <array>

using namespace std;

double pyeongJumSum(const array<double,20>& arr) {
    double sum = 0;
    for(int i = 0; i<arr.size(); i++) {
        sum += arr[i];
    }
    return sum;
}

double levelSum(const array<string,20>& arr, const array<double,20>& arr2) {
    double sum = 0;

    for (int i = 0; i<arr.size(); i++) {
        if (arr[i] == "A+") sum += arr2[i]*4.5;
        else if (arr[i] == "A0") sum += arr2[i]*4.0;
        else if (arr[i] == "B+") sum += arr2[i]*3.5;
        else if (arr[i] == "B0") sum += arr2[i]*3.0;
        else if (arr[i] == "C+") sum += arr2[i]*2.5;
        else if (arr[i] == "C0") sum += arr2[i]*2.0;
        else if (arr[i] == "D+") sum += arr2[i]*1.5;
        else if (arr[i] == "D0") sum += arr2[i]*1.0;
        else if (arr[i] == "F") sum += 0.0;
    }

    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    array<double,20> pyeongJumArr = {};
    array<string,20> levelArr = {};

    cout << fixed;
    cout.precision(6);

    for (int i = 0; i < 20; i++) {
        string str;
        cin >> str >> pyeongJumArr[i] >> levelArr[i];
        if (levelArr[i] == "P") {
            pyeongJumArr[i] = 0;
            levelArr[i] = "";
        }
    }
    double hab = 0;

    hab = levelSum(levelArr,pyeongJumArr)/pyeongJumSum(pyeongJumArr);

    cout << hab ;

    return 0;
}