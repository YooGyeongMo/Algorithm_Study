#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string, int> hash;
    
    for (const string& name : participant) {
        hash[name]++;
    }
    
    for (const string& name : completion) {
        hash[name]--;
    }
    
    for (const auto& entry : hash) {
        if (entry.second > 0) {
            return entry.first;
        }
    }
    
    return "";
}