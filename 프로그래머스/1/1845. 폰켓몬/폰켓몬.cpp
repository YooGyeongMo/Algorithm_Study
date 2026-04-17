#include <vector>
#include <set>

using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int size = (int)nums.size() / 2 ;

    set<int> s(nums.begin(), nums.end());

    answer = min((int)s.size(), size );

    return answer;
}