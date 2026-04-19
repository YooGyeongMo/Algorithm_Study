#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool solution(vector<string> phone_book)
{
    // 1. phoneBook 배열을 정렬한다.
    sort(phone_book.begin(), phone_book.end());

    // 2. 1중 Loop을 돌며 앞 번호가 뒷 번호의 접두어인지 확인한다.
    for (int i = 0; i < phone_book.size() - 1; i++)
        if (phone_book[i + 1].find(phone_book[i]) == 0)
            return false;

    // 3. 여기까지 오면 접두어가 없다는 것이다.
    return true;
}
