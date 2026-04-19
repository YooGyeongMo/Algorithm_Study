#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

bool solution(vector<string> phone_book)
{
    unordered_map<string, int> map;
    
    for (const string& number : phone_book) {
        map[number]++;
    }
    
    for (string number : phone_book) {
        string temp = "";
        for (int i = 0; i < number.size()-1; i++) {
            temp += number[i];
            
            if (map.find(temp) != map.end()) {
                return false;
            }
        }
    }
    
    return true;
    
    
}
